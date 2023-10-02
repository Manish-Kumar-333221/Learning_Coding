# Problem 01
digit_01 = int(input("# Problem 01\nEnter your number: "))
i_01 = 0
if digit_01 == 0:
    i_01 = 1

print(f"No. of digits in {digit_01} are: ", end="")

while digit_01 != 0:
    digit_01 //= 10
    i_01 += 1

print(f"{i_01}\n")

# Problem 02
digit_02 = int(input("\n# Problem 02\nEnter your number: "))
i_02 = 0
print(f"Sum of all digits in {digit_02} are: ", end="")

while digit_02 != 0:
    i_02 += digit_02 % 10
    digit_02 //= 10
print(f"{i_02}\n")

# Problem 03
no = int(input("\n# Problem 03\nEnter your number: "))
if (no % 7 == 0 and no % 11 == 0):
    print(f"{no} is divisible by 7 and 11\n")
else:
    print(f"{no} is not divisible by 7 and 11\n")

# Problem 04
units = int(input("\n# Problem 04\nEnter your total units: "))
total = 0
if (units <= 50):
    total = 5 * units
elif (units <= 150):
    total = (250 + ((units - 50) * 10))
elif (units <= 250):
    total = (1250 + ((units - 150) * 15))
else:
    total = (2750 + ((units - 250) * 20))
total += total / 10
print(f"Total bill is: Rs {total}")

# Problem 05
month = int(input("\n# Problem 05\nEnter month no.: "))
if (month == 1 or month == 3 or month == 5 or month == 7 or month == 8 or month == 10 or month == 12):
    print(f"No. of days in month ({month}) is 31 ")
elif (month == 4 or month == 6 or month == 9 or month == 11):
    print(f"No. of days in month ({month}) is 30 ")
elif (month == 2):
    print("No. of days in month (2) is (28 or 29) ", month)
else:
    print("Invalid input!")