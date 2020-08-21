import math
from random import randint

code = '''
def area_of_sphere(r):
    return 4 * math.pi * r ** 2
'''
context = {}
context["math"] = math
exec(code, context)

r = randint(1,100)
area_of_sphere = context["area_of_sphere"]
area = area_of_sphere(r)

print(f"The area of a sphere of radius {r} is : {area}")

