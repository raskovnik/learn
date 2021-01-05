from random import randint
a = str(randint(1,100))
a_sum , n_sum = int(a), 0

for i in a:
    n_sum += int(i) ** len(a)

if n_sum == a_sum:
    print(f"{a} is a narcissistic number!!")
else:
    print(f"{a} is not a narcissistic number!!")