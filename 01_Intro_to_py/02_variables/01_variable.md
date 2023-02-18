# Variables 

- Variables are containers for storing data values.
- x = 5
- y = "John"
- print(x)
- print(y)

## Casting 

- If you want to specify the data type of a variable, this can be done with casting.

```py
x = str(3)    # x will be '3'
y = int(3)    # y will be 3
z = float(3)  # z will be 3.0

```

## Case-Sensitive

- Variable names are case-sensitive.

```py
a = 4
a=5
A = "Sally"
#A will not overwrite a

```


## Variable Names


- A variable can have a short name (like x and y) or a more descriptive name (age, carname, total_volume). Rules for Python variables:
- A variable name must start with a letter or the underscore character
- A variable name cannot start with a number
- A variable name can only contain alpha-numeric characters and underscores (A-z, 0-9, and _ )

## Multi Words Variable Names

- Variable names with more than one word can be difficult to read.

- There are several techniques you can use to make them more readable:

### Camel Case

- Each word, except the first, starts with a capital letter:

```py
myVariableName = "John"
```
### Pascal Case

Each word starts with a capital letter:

```py
 MyVariableName = "John"
```

### Snake Case
Each word is separated by an underscore character:

```py
my_variable_name = "John"
```

## Many Values to Multiple Variables

- Python allows you to assign values to multiple variables in one line:

```py
x, y, z = "Orange", "Banana", "Cherry"
print(x)
print(y)
print(z)
```


## One Value to Multiple Variables

- And you can assign the same value to multiple variables in one line:

```py
x = y = z = "Orange"
print(x)
print(y)
print(z)
```

## Unpack a Collection

- If you have a collection of values in a list, tuple etc. Python allows you to extract the values into variables. This is called unpacking.

```py
fruits = ["apple", "banana", "cherry"]
x, y, z = fruits
print(x)
print(y)
print(z)
```

## Global Variables
- Variables that are created outside of a function (as in all of the examples above) are known as global variables.

- Global variables can be used by everyone, both inside of functions and outside.

- Create a variable outside of a function, and use it inside the function
```py
x = "awesome"

def myfunc():
  print("Python is " + x)

myfunc()
```

## To verify the type of any object in Python, use the type() function:

Example
```py

x = 1    # int
y = 2.8  # float
z = 1j   # complex

print(type(x))
print(type(y))
print(type(z))
```
