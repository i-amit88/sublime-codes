import { Box,Stack,VStack,Heading, HStack, Button, Input ,Text} from '@chakra-ui/react'
import {AiOutlineSend} from "react-icons/ai"
import React from 'react'

function Footer() {
  return (
   <Box bgColor={'blackAlpha.800'} minH={'40'} p={'64px'} color={'white'}>
    <Stack direction={['column','row']}>
        <VStack w={'full'} alignItems={'stretch'} px={'4'} textAlign={['center','left']}>
            <Heading size={'md'} textTransform={'uppercase'}>Subcribe to the newsFeed</Heading>
            <HStack borderBottom={'2px solid white'} py={'2'}>
                <Input 
                    placeholder='Enter your Email'
                    border={'none'}
                    focusBorderColor='none'
                    borderRadius={'none'}
                />
                <Button p={'0'} colorScheme='purple'
                variant={'ghost'}
                borderRadius={'0 20px 20px 0'}>
                    <AiOutlineSend />
                </Button>
            </HStack>
        </VStack>
        <VStack w={'full'} borderLeft={['none','2px solid white']} borderRight={['none','2px solid white'] }>
            <Heading textTransform={'uppercase'} textAlign={'center'}>
                Video Hub
            </Heading>
            <Text> @All Rights Reserved</Text>
        </VStack>

        <VStack w={'full'}>
            <Heading textTransform={'uppercase'} size={'md'}>
                Social Media
            </Heading>
            <Button variant={'link'} colorScheme='white'><a target="blank" href="https://www.youtube.com/">Youtube</a></Button>
            <Button variant={'link'} colorScheme='white'><a  target="blank" href="https://www.instagram.com/">Instagram</a></Button>
            <Button variant={'link'} colorScheme='white'><a target="blank" href="https://www.github.com/">Github</a></Button>
        </VStack>
    </Stack>
   </Box>
  )
}

export default Footer