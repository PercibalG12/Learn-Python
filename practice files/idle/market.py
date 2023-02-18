#Name: Percival Roberts
#Date : November 6, 2022
#Description : Continuous Assessment 8 : Question 4

re_order_qty = float
re_order_cost = float
total_cost = float(0)

item = input("Enter name of item: ")

while(item != 'END' and item != 'end'):
    quantity = int(input("Enter current quantity of item:"))
    print("\n__________Rating 1 - 4________\n")
    print("1 for items that moves quickly from the shelf\n")
    print("4 for items that remains on shelf the longest\n")
    rating = int(input("Enter rating:"))
    
    unitCost=float(input("Enter unit cost for item: $"))
    
    if(rating == 1 or quantity < 20):
        re_order_qty = quantity * 3
        re_order_cost = unitCost * re_order_qty
    else:
        re_order_cost = 0
        re_order_qty = 0
    total_cost = total_cost + re_order_cost
    
    print("\nItem name:", item)
    print("Re-order quantity:", re_order_qty)
    print("Re-order cost: $",re_order_cost)
    print("\n_____________________________")
    
    item = input("\nEnter name of item:")
print("total_cost re-order cost: $",total_cost)

