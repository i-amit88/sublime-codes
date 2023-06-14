import {
    Avatar,
    Box,
    Button,
    Container,
    Heading,
    Input,
    Text,
    VStack,
  } from '@chakra-ui/react';
  import React from 'react';
  import { Link } from 'react-router-dom';
  
  const SignUp = () => {
    return (
      <Container maxW={'container.sm'} h={'100%'} p={'16'} py={'1'}>
        <Box>
          <VStack
            alignItems={'stretch'}
            spacing={'8'}
            w={['full', '96']}
            m={'auto'}
            my={'16'}
            
          >
            <Heading textAlign={'center'}>Video Hub</Heading>
            <Avatar alignSelf={'center'} boxSize={'32'} />
            <Input
              placeholder={'Name'}
              type={'text'}
              required
              focusBorderColor={'purple.500'}
            />
            <Input
              placeholder={'Email'}
              type={'email'}
              required
              focusBorderColor={'purple.500'}
            />
            <Input
              placeholder={'Password'}
              type={'password'}
              required
              focusBorderColor={'purple.500'}
            />
  
           
  
            <Button colorScheme={'purple'} type={'submit'}>
              Log In
            </Button>
  
            <Text textAlign={'right'}>
              Alredy User?{' '}
              <Button variant={'link'} colorScheme={'purple'}>
                <Link to={'/login'}>Login</Link>
              </Button>
            </Text>
          </VStack>
        </Box>
      </Container>
    );
  };
  

  
export default SignUp;