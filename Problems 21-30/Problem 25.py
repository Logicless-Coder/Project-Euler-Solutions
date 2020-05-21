def findNumberOfDigits(n):
    return len(str(n))

a = 0
b = 1

c = a + b
index = 2

while findNumberOfDigits(c) < 1000:
    a, b = b, c
    c = a + b
    index += 1

print(index)
