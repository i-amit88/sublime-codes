import React from 'react'
import vg from '../assets/2.webp'
import { AiFillAmazonCircle, AiFillGoogleCircle, AiFillInstagram, AiFillYoutube } from 'react-icons/ai'


function Home() {
    return (
        <>
            <div className='home'>
                <main>
                    <h1>Sol Stream</h1>
                    <p>Solution to all your problems</p>
                </main>
            </div>
            <div className="home2">
                <img src={vg} alt="graphics" />
                <div>
                    <p>Lorem ipsum dolor sit amet consectetur adipisicing elit. Deserunt odit provident debitis fugit impedit distinctio porro nam quae. Vitae recusandae ratione exercitationem animi repellat magni atque expedita odio perferendis officia!</p>

                </div>
            </div>


            <div className="home3" id='about'>
                <div>
                    <h1>Who we are?</h1>
                    <p>Lorem ipsum, dolor sit amet consectetur adipisicing elit. Rerum alias aspernatur adipisci neque harum delectus eum qui sequi eaque corporis officiis, cumque dolorum illo cupiditate modi dolores. Quas, autem saepe.kore Lorem ipsum dolor sit amet consectetur adipisicing elit. Vero velit temporibus recusandae molestias sequi. Nulla amet, quae labore dolores corporis magni veritatis inventore nisi laboriosam fugiat at sequi quasi assumenda!Lorem Lorem ipsum dolor sit amet consectetur adipisicing elit. Aspernatur nisi mollitia dolorum. Repellat architecto magnam quaerat labore sint molestias cumque. Ratione eius officia odit reiciendis. Voluptatibus labore veniam autem iste. Lorem, ipsum dolor sit amet consectetur adipisicing elit.</p>
                </div>
            </div>

            <div className="home4" id='brands'>
                <div>
                    <h1>Brands</h1>
                    <article>
                        <div style={{ animationDelay: "0.3s" }}>
                            <AiFillGoogleCircle />
                            <p>Google</p>
                        </div>
                        <div style={{ animationDelay: "0.5s" }}>
                            <AiFillAmazonCircle />
                            <p>Amazon</p>
                        </div>
                        <div style={{ animationDelay: "0.7s" }}>
                            <AiFillInstagram />
                            <p>Instagram</p>
                        </div>
                        <div style={{ animationDelay: "1s" }}>
                            <AiFillYoutube /> 
                            <p>Youtube</p>
                        </div>
                    </article>
                </div>
            </div>
        </>
    );
};

export default Home;