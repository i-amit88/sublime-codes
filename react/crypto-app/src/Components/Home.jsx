import { Box, Image, Text } from '@chakra-ui/react'
import React from 'react'
import btc from "../assets/btc.png"

function Home() {
  return (
    <Box w={'full'} h={'80vh'}  bgColor={'blackAlpha.700'}>
     <Image w={'full'} h={'full'} objectFit={'contain'} src={btc} filter={"grayscale(1)"} />
    <Text fontSize={'6xl'} mt={'-20'} fontWeight={'thin'} textAlign={'center'} py={'4'} color={'whiteAlpha.700'}>X Crypto</Text>
    </Box>

  )
}

export default Home