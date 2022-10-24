|  Text  |  Numeric Types | Sequence Types  | Mapping Type  | Set Types   |Boolean Type|Binary Types|None Type|
|--------|----------------|-----------------|---------------|-------------|------------|------------|---------|
| String |Int             |List             |Dictionary     |Set          |True        |bytes       |None     |
|        |Float           |Tuple            |               |Frozenset    |False       |bytearray   |         |
|        |Complex         |Range            |               |             |            |memoryview  |         |
|_____________________________________________________________________________________________________________|

```py
x = "Hello World"	#string	
x = 20	#int	
x = 20.5	#float	
x = 1j	#complex	
x = ["apple", "banana", "cherry"]	#list	
x = ("apple", "banana", "cherry")	#tuple	
x = range(6)	#range	
x = {"name" : "John", "age" : 36}	#dict	
x = {"apple", "banana", "cherry"}	#set	
x = frozenset({"apple", "banana", "cherry"})	#frozenset	
x = True	#boolean	
x = b"Hello"	#bytes	
x = bytearray(5)	#bytearray	
x = memoryview(bytes(5))	#memoryview	
x = None	#NoneType
```

# Strings
-  A colection of text surrounded by double or single quotes.

```py 
x = "str"
print(type(x))
```

# Int

- Int, or integer, is a whole number, positive or negative, without decimals, of unlimited length.
```py
x = 1
y = -3255522

print(type(x))
print(type(y))

```

# Float

- Float, or "floating point number" is a number, positive or negative, containing one or more decimals.

```py
 x = 1.10
y = 1.0
z = -35.59

print(type(x))
print(type(y))
print(type(z))
```

# Complex


