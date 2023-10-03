# Function to ask riddles and check if the user's guess is correct
def ask_riddles():
    for riddle in riddles:
        print(riddle['question'])
        user_response = input("What am I? (Type 'ans' to see the answer, or your guess): ")
        
        if user_response.lower() == 'ans':
            print(f"Answer: {riddle['answer']}")
        elif user_response.lower() == riddle['answer'].lower():
            print("Correct answer!")
        else:
            print("Incorrect answer. Try the next riddle.")

# Main program loop
while True:
    print("Welcome to the Riddle Game!")
    print("Type 'start' to begin or 'quit' to exit.")
    
    user_choice = input(": ").lower()
    
    if user_choice == 'start':
        ask_riddles()
    elif user_choice == 'quit':
        print("Goodbye!")
        break
    else:
        print("Invalid choice. Please type 'start' to play or 'quit' to exit.")
