from chatterbot import ChatBot
from chatterbot.trainers import ChatterBotCorpusTrainer
import tkinter as tk

# Create the main window
root = tk.Tk()
chatbot = ChatBot("Chatty")
root.title("Simple Tkinter Program")
root.geometry("300x200")

# Create a label
label = tk.Label(root, text="Hello, Tkinter!", font=("Arial", 14))
label.pack(pady=20)


# Define a function for button click
def on_click():
    label.config(text="Button Clicked!")


trainer = ChatterBotCorpusTrainer(chatbot)

# Train the chatbot with the English corpus
trainer.train("chatterbot.corpus.english")

print("Chatty is ready to talk! Type 'bye' to exit.")

while True:
    user_input = input("You: ")
    if user_input.lower() == "bye":
        print("Chatty: Goodbye!")
        break

    response = chatbot.get_response(user_input)
    print("Chatty:", response)


# Create a button
button = tk.Button(root, text="Click Me", command=on_click)
button.pack(pady=10)

# Run the Tkinter event loop
root.mainloop()
