from math import ceil

def generatePrimes(limit):
    primes = []
    sample = [True]*limit

    for i in range(2, int(ceil(limit ** 0.5))):
        for j in range(i*i, limit, i):
            sample[j] = False

    for i in range(2, limit):
        if sample[i]:
            primes.append(i)

    return primes

def isTruncatablePrime(number):
    s = str(number)
    for i in range(len(s)):
        if int(s[i:]) not in primesList:
            return False
    for i in range(1, len(s)):
        if int(s[:i]) not in primesList:
            return False
    return True

primesList = generatePrimes(10**6)
answer = 0

for prime in primesList:
    if isTruncatablePrime(prime):
        answer += prime

print(answer - 17) # To exclude 2, 3, 5 and 7 as stated in problem
