# My first Python program
def greet(name):
    return f"Hello, {name}! Welcome to my GitHub!"

def main():
    name = input("Enter your name: ")
    print(greet(name))
    
    # Basic calculator
    num1 = float(input("Enter first number: "))
    num2 = float(input("Enter second number: "))
    
    print(f"Addition: {num1 + num2}")
    print(f"Multiplication: {num1 * num2}")

if __name__ == "__main__":
    main()