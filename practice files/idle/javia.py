array=list(map(int, input("Please enter 25 numbers in the array :").strip().split()))
new_array = array
print("The numbers in th array are as follows",new_array)

def Average (new_array):
    return sum(new_array) / len(new_array)

average = Average(new_array)

print("Average of the numbers in the array are", round(average,2))



