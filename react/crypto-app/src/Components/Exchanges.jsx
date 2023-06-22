import React, { useEffect, useState } from 'react'
import axios from 'axios'
import { server } from '../index'
import { Container, HStack, Heading, Image, Text, VStack } from '@chakra-ui/react';
import Loader from './Loader';
import ErrorComponent from './ErrorComponent';

function Exchanges() {


    const [exchanges,setExchanges] = useState([]);
    const [loading,setLoading] = useState(true);
    const [error,setError] = useState(false);
    useEffect(() =>{
        const fetchExchanges = async () =>{
            try {
                const {data} = await axios.get(`${server}/exchanges`);
            setExchanges(data);
            setLoading(false);
            } catch (error) {
                setLoading(false);
                setError(true);
            }
        }
        fetchExchanges();
    },[]);


    if(error) return <ErrorComponent message={'error while fetching the data'}/>

  return (
    <Container maxW={'container.xl'}>{loading? <Loader /> :(<>
    <HStack  wrap={'wrap'} justifyContent={'space-evenly'}>{exchanges.map((i) =>(
       <ExchangeCard 
       key={i.id}
       name={i.name} img={i.image}
       rank={i.trust_score_rank}
       url={i.url}
        />
    ))}</HStack>
    </>
    )}
    </Container>
  )
}



const ExchangeCard = ({name , img , rank, url }) => <a href={url} target={"blank"}>
    <VStack w={'52'} shadow={'lg'} borderRadius={'lg'} p={'8'} m={'4'}  
        >
        <Image src={img} 
        w={'10'}
        h={'10'}
        objectFit={'contain'}
        alt='Exchange image' />
        <Heading size={'md'} noOfLines={'1'}>
            {rank}
        </Heading>
        <Text noOfLines={'1'}>{name}</Text>
    </VStack>
</a>


export default Exchanges