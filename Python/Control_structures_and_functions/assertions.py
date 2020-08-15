def product(*args):
    result = 1
    for arg in args:
        result *= arg
    assert result, "0 argument"
    return result

print(product(5,4,8,4,6,5))
