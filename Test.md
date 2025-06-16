Calculate the sum of all even numbers from 1 to a user-input positive integer
modular approach. Use a procedure to check if a number is even.

Compute the average of positive numbers entered by the user until a negative number is
input. Use a procedure to validate inputs and a while loop.
Question 3: Password Validatio

Create a program that repeatedly prompts for a password until the correct one ("secure123")
is entered, using a do-while loop and a procedure to check the password


#number 1
def is_even(number):
    return number % 2 == 0

def sum_of_evens(limit):
    total = 0
    for i in range(1, limit + 1):
        if is_even(i):
            total += i
    return total

# Main program
n = int(input("Enter a positive integer: "))
if n < 1:
    print("Please enter a positive integer greater than 0.")
else:
    result = sum_of_evens(n)
    print(f"Sum of all even numbers from 1 to {n} is: {result}")


#number 2
def is_positive(number):
    return number >= 0

# average calculation
count = 0
total = 0

while True:
    num = int(input("Enter a positive number (negative to stop): "))
    if not is_positive(num):
        break
    total += num
    count += 1

if count > 0:
    average = total / count
    print(f"Average of entered positive numbers: {average}")
else:
    print("No positive numbers were entered.")


#number 3
def check_password(input_password):
    return input_password == "secure123"

#using a do-while-like loop
while True:
    password = input("Enter password: ")
    if check_password(password):
        print("Access granted.")
        break
    else:
        print("Incorrect password. Try again.")

