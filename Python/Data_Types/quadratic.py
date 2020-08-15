from random import randint
from math import sqrt

print("Quadratic Equation solver: ax\N{SUPERSCRIPT TWO} + bx + c = 0")
a = randint(-100, 100)
b = randint(-100, 100)
c = randint(-100, 100)

print(a,  b, c)
x1 = (-b + sqrt(((b**2) - (4 * a * c)))) / (2 * a)
x2  = (-b - sqrt(((b**2) - (4 * a * c)))) / (2 * a)

print(f"The values for the equation {a}x\N{SUPERSCRIPT TWO} + {b}x + {c} = 0 are {x1} and {x2}")