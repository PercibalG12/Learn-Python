# Dictionary

- Dictionaries are used to store data values in key:value pairs.

- A dictionary is a collection which is ordered, changeable and do not allow duplicates.

- Dictionary items are presented in key:value pairs, and can be referred to by using the key name. 

- NB: As of Python version 3.7, dictionaries are ordered. In Python 3.6 and earlier, dictionaries are unordered.

## Create and print a dictionary:

```py
dict = {
  "country": "JAMAICA",
  "year": 2023
}
print(dict)
```

```py
#print an elemnt in a dictionary 
dict = {
  "country": "JAMAICA",
  "year": 2023
}
print(dict["country"])
```

```py
#print an elemnt in a dictionary 
dict = {
  "country": "JAMAICA",
  "year": 2023
}
print(dict.get("1","Not found"))
```

