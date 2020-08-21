import sys

def quarters(next_quarter = 0.0):
    while True:
        yield next_quarter
        next_quarter += 0.25

result = []
for x in quarters():
    result.append(x)
    if x >= 2:
        print(quarters())
        print()
        break
    print(result)

def new_quarters(new_next_quarter = 0.0):
    while True:
        received = (yield new_next_quarter)
        if received is None:
            new_next_quarter += 0.25
        else:
            new_next_quarter = received

new_result = []
generator = new_quarters()
while len(new_result) < 5:
    x = next(generator)
    if abs(x - 0.25) < sys.float_info.epsilon:
        x = generator.send(1.0)
    new_result.append(x)
    print(new_result)