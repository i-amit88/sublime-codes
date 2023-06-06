import React from 'react'

function Contact() {
    return (
        <div className='contact'>
            <main>
                <h1>Contact Us</h1>

                <form>
                    <div>
                        <label>Name</label>
                        <input type="text" required placeholder='Abc' />
                    </div>
                    <div>
                        <label>Email</label>
                        <input type="email" required placeholder='Abc@xyz' />
                    </div>
                    <div>
                        <label>Message</label>
                        <input type="text" required placeholder='Tell us your query' />
                    </div>

                    <button type='submit'>Send</button>
                </form>
            </main>
        </div>
    )
}

export default Contact;