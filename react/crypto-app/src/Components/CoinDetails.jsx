import { Badge, Box, Button, Container, HStack, Image, Progress, Radio, RadioGroup, Stat, StatArrow, StatHelpText, StatLabel, StatNumber, Text, VStack } from '@chakra-ui/react'
import React, { useEffect, useState } from 'react'
import { server } from '../index'
import Loader from './Loader';
import { useParams } from 'react-router-dom';
import axios from 'axios';
import ErrorComponent from './ErrorComponent';
import Chart from './Chart';

function CoinDetails() {

  const [coin,setCoin] = useState({});
  const [loading,setLoading] = useState(true);
  const [error,setError] = useState(false);
  const [currency,setCurrency] = useState("inr");
  const [days,setDays] = useState("24h");
  const [chartArray,setChartArray] = useState([]);
  const currencySymbol = currency === "inr" ? "₹ " : currency=== "eur"? "€ " : "$";
  const params = useParams();
  const btns = ["24h", "7d" , "14d","30d","60d","200d","365d", "max"]
  const switchChart = (key)=>{
            setDays(key);
            setLoading(true);
  };

  useEffect(() =>{
    const fetchCoin = async () =>{
        try {
            const {data} = await axios.get(`${server}/coins/${params.id}`);
            const {data:chartData} = await axios.get(`${server}/coins/${params.id}/market_chart?vs_currency=${currency}&days=${days}`);

            setCoin(data);
            setChartArray(chartData.prices);
            console.log(chartData);
        setLoading(false);
        } catch (error) {
            setLoading(false);
            setError(true);
        }
    }
    fetchCoin();
},[params.id,currency,days]);

  if(error) return <ErrorComponent message={'Failed to Fetch Data'}/>



  return (
    <Container maxW={'container.xl'} >
      {loading?(<Loader />) : (<>
        <Box borderWidth={1} width={'full'}> 
          <Chart days={days} arr={chartArray} currency={currencySymbol}/>
        </Box>
        <HStack p={'4'} wrap={'wrap'} overflowX={'auto'}>
          {
            btns.map((i)=>(
              <Button key={i} onClick={()=>switchChart(i)}>{i}</Button>
            ))
          }
        </HStack>
        <RadioGroup value={currency} onChange={setCurrency} p={'8'}>
        <HStack spacing={'4'}>
          <Radio value="inr">INR</Radio>
          <Radio value="usd">USD</Radio>
          <Radio value="eur">EUR</Radio>
        </HStack>
      </RadioGroup>

      <VStack spacing={'4'} p='16' alignItems={'flex-start'}>
        <Text alignSelf={'center'} opacity={0.7} fontSize={'small'}>Updated on {Date(coin.market_data.last_updated).split('G')[0]}</Text>
        <Image src={coin.image.large}  w={'16'} h={'16'} objectFit={'contain'}/>

        <Stat>
          <StatLabel>{coin.name}</StatLabel>
          <StatNumber>{currencySymbol}{coin.market_data.current_price[currency]}</StatNumber>
          <StatHelpText>
            <StatArrow type={coin.market_data.price_change_percentage_24h > 0 ? "increase" : "decrease"}/>
            {coin.market_data.price_change_percentage_24h} %
          </StatHelpText>
        </Stat>
        <Badge fontSize={'2xl'} colorScheme={'purple'}  borderRadius={'7'} variant={'subtle'}>{`#${coin.market_cap_rank}`}</Badge>

        <CustomBar high={`${currencySymbol} ${coin.market_data.high_24h[currency]}`} low={`${currencySymbol} ${coin.market_data.low_24h[currency]}`} />
        <Box w={'full'} p="4">
          <Item title={'Max Supply'} value={coin.market_data.max_supply} />
          <Item title={'Circulating Supply'} value={coin.market_data.circulating_supply} />
          <Item title={'Market Cap'} value={`${currencySymbol} ${coin.market_data.market_cap[currency]}`} />
          <Item title={'All Time Low'} value={`${currencySymbol} ${coin.market_data.atl[currency]}`} />
          <Item title={'All Time High'} value={`${currencySymbol} ${coin.market_data.ath[currency]}`} />
        </Box>
      </VStack>
      </>)}
    </Container>
  )
}

const Item = ({title,value}) =>(
  <HStack justifyContent={'space-between'} w={'full'} my={"4"}>
    <Text  letterSpacing={"widest"}>
      {title}
    </Text>
    <Text>{value}</Text>
  </HStack>
);

const CustomBar = ({high,low}) => (
  <VStack w={'full'}>
    <Progress value={50} colorScheme='teal' w={'full'}/>
    <HStack justifyContent={'space-between'} w={'full'}>
      <Badge children={low} colorScheme='red' fontSize={'16'} />
      <Text fontSize={'large'}> 24H Range</Text>
      <Badge children={high} colorScheme='green' fontSize={'16'} />
    </HStack>
  </VStack>
);

export default CoinDetails