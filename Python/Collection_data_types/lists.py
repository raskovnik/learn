woods = ["cedar", "Yew", "Fir", "Spruce"]
print(woods)
woods[2:2] = ["Pine"] # Insert an item at index 2
print("Insert item at index 2 :",woods)
woods.insert(2, "Pine") # Inserting an item at index 2 can also be achieved by list.insert()
print("Insert an item at index 2 using insert(): ",woods)

#deleting items from a list
woods[2:4] = [] #delete items at index 2 to 4
print("Delete items from index 2 to 4: ", woods)
#The same can also be achieved by:
del woods[2:4]
print("Delete items from index 2 to 4 using del() :",woods)