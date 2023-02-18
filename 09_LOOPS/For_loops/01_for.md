# FOR LOOP

- A for loop is used for iterating over a sequence (that is either a list, a tuple, a dictionary, a set, or a string).

```py
food = ["cherry", "cake", "apple"]
for x in food:
  print(x)
```

## The break Statement

- With the break statement we can stop the loop before it has looped through all the items:

```py
food = ["cherry", "cake", "apple"]
for x in food:
  if x == "cherry":
    break
print(x)
```

## The continue Statement

- With the continue statement we can stop the current iteration of the loop, and continue with the next:

```py
food = ["cherry", "cake", "apple"]
for x in food:
  if x == "cherry":
    continue    
print(x) # apple

```

- The code outputs "apple" because the continue statement in the if condition is executed when x is equal to "cherry", which skips the rest of the loop for that iteration and goes to the next iteration. When the loop reaches "apple", the continue statement is not executed, and the loop runs to completion with "apple" as the last item in the food list. Therefore, x takes the value of "apple" in the last iteration of the loop, and that's what is printed after the loop.

- The output is not "cake" because the print statement is outside the for loop, so it only prints the last value of x after the loop has completed all its iterations. In the loop, the if condition is true for the first iteration when x is equal to "cherry", and the continue statement is executed, which skips the rest of the loop for that iteration and goes to the next iteration. In the second iteration, x takes the value of "cake", but there is no other if condition that will cause the loop to skip or terminate, so the loop continues to the last iteration, where x takes the value of "apple". Therefore, when the loop ends, the last value of x is "apple", and that's what is printed after the loop.

## The range() Function

- To loop through a set of code a specified number of times, we can use the range() function.

- The range() function returns a sequence of numbers, starting from 0 by default, and increments by 1 (by default), and ends at a specified number.

```py
for x in range(10):
  print(x)
#Note that range(10) is not the values of 0 to 10, but the values 0 to 9.
```

- The range() function defaults to 0 as a starting value, however it is possible to specify the starting value by adding a parameter: range(1, 10), which means values from 1 to 10 (but not including 10):

```py
for x in range(1, 10):
  print(x)
```

- The range() function defaults to increment the sequence by 1, however it is possible to specify the increment value by adding a third parameter: range(2, 30, 3):
```python
for x in range(2, 30, 3):
  print(x)
```