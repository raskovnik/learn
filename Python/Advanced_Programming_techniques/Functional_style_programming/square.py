import functools
import operator

a = [1,2,3,4]
print("List a: ", a)
print("Square all values in a: ",list(map(lambda x: x ** 2, a)))#print a list where each item in a is squared
print("Filter all values in a greater than 2: ", list(filter(lambda x: x > 2, a)))#print a filtered list of items in a greater than 2

#reducing the values in a
print("reduced a: ", functools.reduce(lambda x, y: x * y, a))
print("reducing a using operator.mul: ", functools.reduce(operator.mul, a))

