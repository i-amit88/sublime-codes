import { Carousel } from 'react-responsive-carousel';
import { Box, Stack } from '@chakra-ui/react';
import 'react-responsive-carousel/lib/styles/carousel.min.css';
import img1 from '../assets/1.jpg';
import img2 from '../assets/2.jpg';
import img3 from '../assets/3.jpg';
import img4 from '../assets/4.jpg';
import img5 from '../assets/5.png';
import { Image, Heading } from '@chakra-ui/react';
import { Container,Text } from '@chakra-ui/react';


import React from 'react'


function Home() {
    return (
        <Box>
            <MyCarousel />
            <Container maxW={'container.xl'} maxH={'100vh'} p={'16'}>
                <Heading textTransform={'uppercase'} py={'2'} w={'fit-content'} borderBottom={'2px solid'} m={'auto'}
                >
                    Services
                </Heading>
            <Stack 
                h='full'
                p={'4'}
                alignItems={'center'}
                direction={['column','row']}   //responsive array  small then large
                >
                    <Image src={img5} filter={'hue-rotate(-130deg)'} h={['40','400']}/>
                    <Text letterSpacing={'widest'} lineHeight={'190%'} p={['4','16']} textAlign={'center'} >
                        Lorem ipsum dolor sit amet consectetur, adipisicing elit. Beatae recusandae perferendis quam saepe ratione expedita architecto voluptatem, earum sequi quos atque dignissimos vero temporibus, at laudantium corrupti tempore veniam aliquid.
                        Amet assumenda corrupti quos accusantium, labore cum quam! Nesciunt maiores itaque unde officia, reprehenderit voluptas. Neque aliquam magni odit blanditiis repellat, molestiae dolor eveniet soluta asperiores temporibus ut, harum quidem?
                        Animi eligendi, eveniet doloribus minus enim voluptatum debitis? Eaque delectus ullam dolorem modi cumque. Ratione officia et impedit eius dicta iste distinctio nemo corporis tempore sit. Commodi, odit? Ipsum, impedit!
                    </Text>
                </Stack>



            </Container>
        </Box>
    );
}

const headingOptions = {
    pos: 'absolute',
    left: '50%',
    top: '50%',
    transform: 'translate(-50%,-50%)',
    textTransform: 'uppercase',
    p: '4',
    size: '3xl'
};

const MyCarousel = () => (
    <Carousel
        autoPlay
        infiniteLoop
        interval={1000}
        showArrows={false}
        showStatus={false}
        showThumbs={false}
    >

        <Box w='full' h={'100vh'}>
            <Image src={img1} />
            <Heading bgColor={'blackAlpha.600'} color={'white'} {...headingOptions}>Watch the Future</Heading>
        </Box>
        <Box w='full' h={'100vh'}>
            <Image src={img2} />
            <Heading bgColor={'whiteAlpha.900'} color={'black'} {...headingOptions}>Future is Gaming</Heading>
        </Box>
        <Box w='full' h={'100vh'}>
            <Image src={img3} />
            <Heading bgColor={'whiteAlpha.600'} color={'black'} {...headingOptions}>Console Gaming</Heading>
        </Box>
        <Box w='full' h={'100vh'}>
            <Image src={img4} />
            <Heading bgColor={'whiteAlpha.600'} color={'black'} {...headingOptions}>Come With Me</Heading>
        </Box>

    </Carousel>
)


export default Home;