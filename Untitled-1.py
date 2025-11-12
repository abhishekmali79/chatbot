from chatterbot import ChatBot
from chatterbot.trainers import ListTrainer

chatbot = ChatBot('support bot')

# Create a new trainer for the chatbot
trainer = ListTrainer(chatbot)

# Train the chatbot based on the english corpus
trainer.train(["Hello",
    "Hi there! How can I help you today?",
    "What is your name?",
    "I am SupportBot, your virtual assistant.",
    "How are you?",
    "I'm doing great, thanks for asking!",
    "Bye",
    "Goodbye! Have a nice day!"
])

# Get a response to an input statement
response=chatbot.get_response("hello")

print(response)