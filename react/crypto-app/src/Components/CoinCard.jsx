import React from 'react'
import { Link } from 'react-router-dom'
import { Container, HStack, Heading, Image, Text, VStack } from '@chakra-ui/react';


const CoinCard = ({id , name ,  img , symbol, price , currencySymbol="₹" }) => <Link to={`/coin/${id}`} >
    <VStack w={'52'} shadow={'lg'} borderRadius={'lg'} p={'8'} m={'4'}  
        >
        <Image src={img} 
        w={'10'}
        h={'10'}
        objectFit={'contain'}
        alt='Exchange image' />
        <Heading size={'md'} noOfLines={'1'}>
            {symbol}
        </Heading>
        <Text noOfLines={'1'}>{name}</Text>
        <Text noOfLines={'1'}>{price? `${currencySymbol}${price}` : "NA"}</Text>
    </VStack>
</Link>
  

export default CoinCard