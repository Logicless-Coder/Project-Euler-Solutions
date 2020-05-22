n = 1001

d1 = 0
d2 = 0

for i in range(1, n+1):
    d1 += (i*i)
    d1 += int(i%2 == 0)
    d2 += (i*i) - i + 1

total = d1 + d2 - 1
print(total)
