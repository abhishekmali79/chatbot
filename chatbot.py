from chatterbot import ChatBot
from chatterbot.trainers import ListTrainer
import tkinter as tk

# Create the main window
root = tk.Tk()
root.title("Textbox Example")
root.geometry("350x200")

# Function to manipulate text
def process_input():
    user_text = entry.get()  # Get text from textbox
    processed = user_text.upper()  # Example manipulation: convert to uppercase
    label_result.config(text=f"Processed: {processed}")

# Create a label
label_prompt = tk.Label(root, text="Enter some text:")
label_prompt.pack(pady=5)

# Create a textbox (Entry widget)
entry = tk.Entry(root, width=30)
entry.pack(pady=5)

# Create a button that runs the function
btn = tk.Button(root, text="Process", command=process_input)
btn.pack(pady=10)

# Create a label to display the result
label_result = tk.Label(root, text="", font=("Arial", 12))
label_result.pack(pady=5)

# Run the main event loop
root.mainloop()





