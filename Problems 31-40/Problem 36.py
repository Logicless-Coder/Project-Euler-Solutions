def toBinary(number):
    ans = ""
    while number > 0:
        d = number % 2
        ans += str(d)
        number = int(number/2)
    ans = ans[::-1]
    return ans

def isPalindrome(number):
    s = str(number)
    s2 = s[::-1]
    return s == s2

limit = 10 ** 6
answer = 0

for i in range(1, limit):
    if isPalindrome(i) and isPalindrome(toBinary(i)):
        answer += i

print(answer)
