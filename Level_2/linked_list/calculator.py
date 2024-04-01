def takeInput():
    x = float(input("Enter a Numnber: "))
    y = float(input("Enter other Numnber: "))
    
    return x, y

def divide(x, y):
    try:
        result = x / y
    except ZeroDivisionError:
        print("You cant't divide by zero")
    else:
        print("The result is:", result)
        
def main():
    x, y = takeInput()
    divide(x, y)
    
if __name__ == "__main__":
    main()
        
    