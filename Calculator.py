import math

def calculator():
    while True:
        print("\nAdvanced Calculator")
        print("1. Addition")
        print("2. Subtraction")
        print("3. Multiplication")
        print("4. Division")
        print("5. Power")
        print("6. Square Root")
        print("7. Factorial")
        print("8. Logarithm (Base 10)")
        print("9. Trigonometric Functions")
        print("10. Exit")
        
        try:
            choice = int(input("\nEnter your choice (1-10): "))
            
            if choice == 1:
                a, b = map(float, input("Enter two numbers separated by a space: ").split())
                print(f"Result: {a + b}")
            
            elif choice == 2:
                a, b = map(float, input("Enter two numbers separated by a space: ").split())
                print(f"Result: {a - b}")
            
            elif choice == 3:
                a, b = map(float, input("Enter two numbers separated by a space: ").split())
                print(f"Result: {a * b}")
            
            elif choice == 4:
                a, b = map(float, input("Enter two numbers separated by a space: ").split())
                if b == 0:
                    print("Error: Division by zero!")
                else:
                    print(f"Result: {a / b}")
            
            elif choice == 5:
                a, b = map(float, input("Enter base and exponent separated by a space: ").split())
                print(f"Result: {math.pow(a, b)}")
            
            elif choice == 6:
                a = float(input("Enter the number: "))
                if a < 0:
                    print("Error: Square root of negative number is not real!")
                else:
                    print(f"Result: {math.sqrt(a)}")
            
            elif choice == 7:
                a = int(input("Enter a non-negative integer: "))
                if a < 0:
                    print("Error: Factorial of a negative number is undefined!")
                else:
                    print(f"Result: {math.factorial(a)}")
            
            elif choice == 8:
                a = float(input("Enter the number: "))
                if a <= 0:
                    print("Error: Logarithm is undefined for zero or negative numbers!")
                else:
                    print(f"Result: {math.log10(a)}")
            
            elif choice == 9:
                print("Trigonometric Functions:")
                print("1. Sine")
                print("2. Cosine")
                print("3. Tangent")
                trig_choice = int(input("Enter your choice (1-3): "))
                angle = float(input("Enter angle in degrees: "))
                radians = math.radians(angle)
                
                if trig_choice == 1:
                    print(f"Result: {math.sin(radians)}")
                elif trig_choice == 2:
                    print(f"Result: {math.cos(radians)}")
                elif trig_choice == 3:
                    print(f"Result: {math.tan(radians)}")
                else:
                    print("Invalid choice!")
            
            elif choice == 10:
                print("Exiting calculator. Goodbye!")
                break
            
            else:
                print("Invalid choice! Please enter a number between 1 and 10.")
        
        except ValueError:
            print("Error: Invalid input! Please enter numeric values.")

if __name__ == "__main__":
    calculator()
