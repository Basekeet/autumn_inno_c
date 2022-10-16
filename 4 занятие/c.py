n = int(input())
a = list(map(int, input().split()))

a.append(1000000001)
a.sort()

MAX = 0
last_index = 0

v = []
for i in range(1, n + 1):
    if a[i] != a[i - 1]:
        if MAX < i - last_index:
            v = []
            v.append(a[i - 1])
            MAX = i - last_index
        elif MAX == i - last_index:
            v.append(a[i - 1])
        last_index = i
for el in v:
    print(el, end=" ")