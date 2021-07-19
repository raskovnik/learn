x = []
for i in range(1, 11):
    x.append(i)
print(x)
print(x[1::2])
x[1::2] = [0] * len(x[1::2]) # replace every odd-indexed item to 0
print("Replace every odd-indexed item to 0 :", x)
