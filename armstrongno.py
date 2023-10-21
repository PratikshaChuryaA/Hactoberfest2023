# Python program to check if the number is an Armstrong number or not

# take input from the user
num = int(input("Enter a number:"))

# find the sum of the cube of each digit
temp = num
sum = 0
while temp > 0:
    digit = temp % 10
    sum += digit ** 3
    temp //= 10

# display the result
if num == sum:
    print(f"{num} is an Armstrong number")
else:
    print(f"{num} is not an Armstrong number")
