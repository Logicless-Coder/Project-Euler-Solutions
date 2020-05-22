import math

def isCurious(x):
    s = str(x)
    sum = 0
    for ch in s:
        sum += math.factorial(int(ch))
    return sum == x

ans = 0

for i in range(10, 1000000): # I checked and any number with more than 6 digits in not Curios ;)
    if isCurious(i):
        ans += i

print(ans)
