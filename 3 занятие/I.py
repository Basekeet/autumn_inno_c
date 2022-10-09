def isPrime(n):
    if n <= 1:
        return False
    for i in range(2, int(n**0.5) + 1):
        if n % i == 0:
            return False
    return True

n = int(input())

if n > 2 and n % 2 == 0:
    for i in range(1, n):
        if isPrime(i) and isPrime(n - i):
            print(i, n - i)
            break
else:
    if isPrime(n - 2):
        print(2, n - 2)
    else:
        print(-1)