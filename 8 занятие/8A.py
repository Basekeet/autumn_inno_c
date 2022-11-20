n, k = map(int, input().split())
q = int(input())

a = []
dp = []

for i in range(n + 1):
    a.append(0)
    dp.append(0)

t = list(map(int, input().split()))

for el in t:
    a[el] = 1

dp[1] = 1
for i in range(2, n + 1):
    if a[i] == 0:
        for j in range(max(1, j - k), i):
            dp[i] += dp[j]
print(dp[n])