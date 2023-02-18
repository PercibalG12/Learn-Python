#Author: Percival Roberts 
#Date: October 23, 2022
#Description: Continuous Assessment 6-Question #2

bee_hive_pop = 50000
rate = 0.1
year = 0
expected_years = 20000

print("The Beehive's current population is:",bee_hive_pop)

while True:
    bee_hive_pop = bee_hive_pop - (bee_hive_pop * rate)
    print("In year",year ,"The beehive's total population will be",bee_hive_pop)
    year = year + 1
    if (bee_hive_pop < expected_years):
        break
    
print("\nThe total years expected for the population to be less than,", expected_years, "is: ", year )
