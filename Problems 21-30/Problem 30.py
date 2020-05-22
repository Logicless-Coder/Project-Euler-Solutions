n = 194979 # I checked with higher values and '194979' ended up being the biggest number to satisfy this condition
totalSum = 0

def sumOf5thPowerOfDigits(x):
    s = str(x)
    ans = 0
    for ch in s:
        ans += pow(int(ch), 5)
    return ans

for i in range(10, n+1):
    if sumOf5thPowerOfDigits(i) == i:
        totalSum += i

print(totalSum)
