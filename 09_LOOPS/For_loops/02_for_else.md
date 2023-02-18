# Else in For Loop

- The else keyword in a for loop specifies a block of code to be executed when the loop is finished:

```py
# Print all numbers from 0 to 5, and print a message when the loop has ended:

for x in range(6):
  print(x)
else:
  print("Finally finished!")
  3
# output 
# 0
# 1
# 2
# 3
# 4
# 5
# Finally finished!
```
- The else block will NOT be executed if the loop is stopped by a break statement.