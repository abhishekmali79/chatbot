from chatterbot import ChatBot
from chatterbot.trainers import ChatterBotCorpusTrainer,ListTrainer
import tkinter as tk

# Create the main window
root = tk.Tk()
chatbot = ChatBot("Chatty")
# Create the main window
root.title("Textbox Example")
root.geometry("300x200")

# Create a label
label = tk.Label(root, text="Enter something:", font=("Arial", 12))
label.pack(pady=10)

# Create an entry (text box)
entry = tk.Entry(root, width=30)
entry.pack(pady=5)

# Create a label to show the result
result_label = tk.Label(root, text="", font=("Arial", 12))
result_label.pack(pady=10)

trainer = ListTrainer(chatbot)
trainer.train("chatterbot.corpus.english")

conversation = [
    "Hello",
    "Hi there!",
    "How are you?",
    "I'm good, thanks!",
    "What is your name?",
    "I'm CustomBot, nice to meet you."
]

trainer.train(conversation)

print("Chatty is ready to talk! Type 'bye' to exit.")

# Define what happens when the button is clicked
def show_text():
    user_text = entry.get()       # Get text from the entry box
    while True:
        user_input = input(user_text)
        if user_input.lower() == "bye":
            print("Chatty: Goodbye!")
            break

        response = chatbot.get_response(user_input)
        print("Chatty:", response)

    result_label.config(text=f"You entered: {user_text}")  # Display it

# Create a button
button = tk.Button(root, text="Show Text", command=show_text)
button.pack(pady=5)
trainer = ChatterBotCorpusTrainer(chatbot)


# Run the Tkinter event loop
root.mainloop()



