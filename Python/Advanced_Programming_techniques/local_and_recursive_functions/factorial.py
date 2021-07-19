from random import randint

def factorial(x):
    if x <= 1:
        return 1
    return x * factorial(x-1)

r = randint(1,20)
print(f"{r}! is {factorial(r)}")