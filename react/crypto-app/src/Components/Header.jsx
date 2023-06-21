import { Button, HStack } from '@chakra-ui/react'
import React from 'react'
import { Link } from 'react-router-dom'

function Header() {
  return (
    <HStack p={'4'} bgColor={'blackAlpha.800'} >
        <Button variant={'unstyled'} p={'2'} color={'white'}>
            <Link to='/'>Home</Link>
        </Button>
        <Button variant={'unstyled'} p={'2'} color={'white'}>
            <Link to='/exchanges'>Exchanges</Link>
        </Button>
        <Button variant={'unstyled'} p={'2'} color={'white'}>
            <Link to='/coins'>Coins</Link>
        </Button>
    </HStack>
  )
}

export default Header