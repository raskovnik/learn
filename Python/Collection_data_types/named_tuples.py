from collections import namedtuple

Sale = namedtuple("Sale", "productid customerid date quantity price") # The second argument is a string of space separated names,one for each item that the custom tuple will take
sales = []
sales.append(Sale(432, 921, "2008-09-14", 3, 7.99))
sales.append(Sale(419, 874, "2008-09-15", 1, 18.49))

total = 0
for sale in sales:
    total += sale.quantity * sale.price
    print(sale.quantity , sale.price, sale.quantity * sale.price)
print("Total ${0:.2f}".format(total)) # prints: Total $42.46