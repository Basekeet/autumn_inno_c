n, k = map(int, input().split())

a = [0, 0] + list(map(int, input().split())) + [0]

dp = [0 for i in range(n + 1)]
r = [-1 for i in range(n + 1)]

for i in range(2, n + 1):
    MAX = dp[i - 1] + a[i]
    r[i] = i - 1
    for j in range(max(1, i - k), i):
        if MAX < dp[j] + a[i]:
            MAX = dp[j] + a[i]
            r[i] = j
    dp[i] = MAX

ans = []
cur = n

while (cur != 1):
    ans.append(cur)
    cur = r[cur]

ans.append(1)
ans.reverse()

print(dp[n])
print(len(ans) - 1)
for el in ans:
    print(el, end=" ")
