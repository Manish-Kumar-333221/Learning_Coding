# int data type
num1 = 9223372036854775807
num2 = -426828452
sum1 = num1 + num2
print("The sum of", num1 , " and ", num2, " numbers is:", sum1)
print(f"The sum of these numbers is: {sum1}")
print(f"The sum of these numbers is: {float(sum1)}")

# float data type
num3 = 55982.556
num4 = 45328.83
sum2 = num3 + num4
print("The sum of these numbers is:", sum2)
print(f"The sum of these numbers is: {sum2}")
print(f"The sum of these numbers is: {sum2}")
print(f"The sum of these numbers is: {int(sum2)}")

# char data type
ch = 'A'
print(ch)

# string data type
num5 = input("Enter Your Name: ")
print("Hello, %s!"% num5)

print("Hello,", end = " ")
print(num5, end = "")
print("!")

a = 5
b = 6
c = 7
print(a, "+", b, "+", c, "=", (a + b + c))
print(f"{a} + {b} + {c} = {a + b + c}")

# Quick Quiz 01
one = 6
two = 8
three = 37
print("%d + %d + %d = %d"% (one, two, three, one + two + three))
print(f"{one} + {two} + {three} = {one + two + three}")