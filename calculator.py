# Function to perform addition
def add(x, y):
    return x + y

# Function to perform subtraction
def subtract(x, y):
    return x - y

# Function to perform multiplication
def multiply(x, y):
    return x * y

# Function to perform division
def divide(x, y):
    if y == 0:
        return "Cannot divide by zero"
    return x / y

while True:
    # Menu for the user
    print("Options:")
    print("Enter 'add' for addition")
    print("Enter 'subtract' for subtraction")
    print("Enter 'multiply' for multiplication")
    print("Enter 'divide' for division")
    print("Enter 'exit' to end the program")

    # User input
    user_input = input(": ")

    # Check for exit
    if user_input == "exit":
        break

    # Get the numbers from the user
    num1 = float(input("Enter first number: "))
    num2 = float(input("Enter second number: "))

    # Perform the selected operation
    if user_input == "add":
        print("Result: ", add(num1, num2))
    elif user_input == "subtract":
        print("Result: ", subtract(num1, num2))
    elif user_input == "multiply":
        print("Result: ", multiply(num1, num2))
    elif user_input == "divide":
        print("Result: ", divide(num1, num2))
    else:
        print("Invalid input")
