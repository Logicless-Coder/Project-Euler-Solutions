n = 100
result = set()

for a in range(2, n+1):
    for b in range(2, n+1):
        term = pow(a, b)
        result.add(term)

print(len(result))
