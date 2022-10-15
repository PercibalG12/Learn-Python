# Return

- The python return statement is used in a function to return something to the caller program.
- We can use the return statement inside a function only.
- In Python, every function returns something. If there are no return statements, then it returns None.
- If the return statement contains an expression, it’s evaluated first and then the value is returned.
- The return statement terminates the function execution.
- A function can have multiple return statements. When any of them is executed, the function terminates.
- A function can return multiple types of values.
- Python function can return multiple values in a single return statement.

```py
def square(num):
    num*num
    
square(3) # nothing happens
```

```py
def square(num):
    num*num
    
print(square(3))#none
```

```py
def square(num):
    return num*num
    
print(square(3))#9
```
