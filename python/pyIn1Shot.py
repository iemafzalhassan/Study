# Chapter 1: Basic Python
# Basic Programs
# Python CLI
# Comments
# Indentation
# Variables
# Keywords in python
# Data Types
# ASCII and Unicode Characters
# Taking Input
# Operators
# Type Conversion
# Hierarchy of Operations
# print("Hello World")

# print("Hello\nWorld")

# \n is used for new line
# This is single line comment. ( Use this for making your pseudo code more understandable for other developers to read the code.)

'''
This
is
a
multi
line
comment.
'''

# Indentation

# Indentation refers to the spaces at the beginning of a code line.

# Python uses indentation to indicate a block of code.

# num1 = int(input("Enter first number: "))
# num2 = int(input("Enter second number: "))
# if num1 > num2:
#     print("num1 is greater than num2!")
# elif num1 == num2:
#     print("num1 is equal to num2!")
# else:
#     print("Follow indentation rules in python! as i followed to print this statement.")

# Python CLI (Command Line Interface)
# Python CLI is a way to execute Python commands directly. It is also known as Python Interactive Shell.
# Type "python3" in the terminal to open python CLI.

# Variables

# Variables are containers for storing data values.
# num1 = 10
# name = "John"
# num2 = 20
# num1 is a variable containing value 10.( Num1 is a variable name and 10 is a value assigned to it.)

#  Data Types

# Integer
# number = 1

# String
# NoName = "iemafzalhassan"

# Float
# Decimal = 1.1

# Boolean
# isTrue = True

# print(type(isTrue))

# Concatination

# name = "iemafzalhassan"
# age = 20
# print("My name is " + name + " and my age is " + str(age))

#  We can print Expression in print function.

# print("My Age after 1 year will be ", age + 1)


# print wit separator

# print("My name is", "iemafzalhassan and my Age is", age, sep="-->")



# ASCII --> American Standard Code for Information Interchange
# Represents Characters as numeric codes.
# A-Z --> 65-90
# a-z --> 97-122
# 0-9 --> 48-57
# space --> 32
# special characters --> 0-31, 127-255
# ord() --> function to get ASCII value of a character.

# char = "^"
# print(ord(char)) # 94
# print(ord("$")) # 36
# print(ord("@")) # 64


# chr() --> function to get character from ASCII value.
# Ascii = 255
# print(chr(Ascii)) # ÿ


# Taking Input

# name = input("Enter your name: ")
# age = int(input("Enter your age: "))
# is_Student = input("Are you a student? (yes/no): ")
# RegNo = int(input("Enter your Registration Number: "))
# print("Hello! " + name + " your age is " + str(age) + " and your Registration Number is " + str(RegNo) + ".")
# print(name, "is a college student.")


#        sum of user input numbers



# firstNumber = int(input("Enter first number: "))
# secondNumber = int (input("Enter second number: "))
# sum = firstNumber + secondNumber    # + is an Addition operator. 
# print("Sum of",firstNumber,"and",secondNumber,"is",sum)
# print("Sum is {}".format(sum))


# Arthmetic operators  --> + (Add), - (Substract), * (Multiply), / (Divide), % (Modulus --> Returns Remainders.), ** (Exponential), // (Floor Division  --> This returns nearest whole numbers.)

# print("Sum", 21 + 12)
# print("Substraction", 21 - 12)
# print("Multiplication", 21 * 12)
# print("Division", 21 / 12)
# print("Remainder", 8 % 6)
# print("Exponential", 21 ** 12)
# print("Floor Division", 21 // 12)


# Assignment Operatos --> =, +=, -=, *=, /=, %=, **=, //=, &=, |=, ^=, >>=, <<=


# n1 = 2
# n2 = 3
# print(n1, n2)
# n2 += n1
# print(n1, n2)

# n2 -= n1
# n2 *= n1
# n2 /= n1
# n2 %= n1




# Comparison Operators --> ==, !=, >, <, >=, <=




















