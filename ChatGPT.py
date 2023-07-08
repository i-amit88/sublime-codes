import openai
import telebot

# Define OpenAI and telegram API keys
openai.api_key = "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"
bot = telebot.TeleBot('6319650692:AAHTZP8aigP0PPqjhx2yw4jDd5SLq5yNPdY')

@bot.message_handler(commands=['start'])
def main(message):
     msg = bot.send_message(message.chat.id, "Go on and ask anything")
     bot.register_next_step_handler(msg, chatgpt)

@bot.message_handler(content_types=['text'])
def chatgpt(message):
    # Generate a response
    completion = openai.ChatCompletion.create(
    model="gpt-3.5-turbo",
    messages=[{"role": "user", "content": message.text}],
    max_tokens=1024,
    n=1,
    stop=None,
    temperature=0.7,)

    response = completion.choices[0].message.content
    bot.send_message(message.chat.id, response)

bot.polling(none_stop=True)
