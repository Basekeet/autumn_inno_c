n = int(input())
v = list(map(int, input().split()))

v.sort()

t1 = v[-1] * v[-2] * v[-3]
t2 = v[0] * v[1] * v[-1]

if t1 > t2:
    print(v[-1], v[-2], v[-3])
else:
    print(v[0], v[1], v[-1])
