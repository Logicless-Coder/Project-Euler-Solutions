from itertools import permutations

s = '123456789'
list = [''.join(p) for p in permutations(s)]

finalList = set()

for number in list:
    for i in range(0, len(s)-2):
        for j in range(i+1, len(s)-1):
            a = int(str(number)[0:i+1])
            b = int(str(number)[i+1:j+1])
            c = int(str(number)[j+1:])

            if a*b == c:
                finalList.add(c)

print(sum(finalList))
