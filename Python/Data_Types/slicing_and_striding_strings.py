s = "The waxwork man"
print(s)
print(s[:12] + "wo" + s[12:]) # add "wo" to s
print(s[:12] + s[7:9] +s[12:])

#Striding
print(f"strided string: {s[::-1]}")