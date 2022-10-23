N = int(input())
N1 = list(map(int, input().split()))
n = []
m = []
h = []
for i in range(0, N):
    if i % 2 == 0:
        n.append(N1[i])
    else:
        m.append(N1[i])
 
n.sort(key=lambda x: -x)
m.sort(key=lambda x: x)
 
while len(n) + len(m) != 0:
    if len(n) + len(m) == 1:
        if len(n) > len(m):
            h.append(n[-1]), n.remove(n[-1]),
        elif len(m) > len(n):
            h.append(m[-1]), m.remove(m[-1])
    else:
        h.append(n[-1]), h.append(m[-1])
        n.remove(n[-1]), m.remove(m[-1])
h = list(map(str, h))
print(" ".join(h))