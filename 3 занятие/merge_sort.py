def Msort(a):
    if len(a) <= 1:
        return a
    t1 = a[:len(a) // 2]
    t2 = a[len(a) // 2:]

    t1 = Msort(t1)
    t2 = Msort(t2)

    i1 = 0
    i2 = 0

    res = []

    while i1 < len(t1) and i2 < len(t2):
        if t1[i1] < t2[i2]:
            res.append(t1[i1])
            i1 += 1
        else:
            res.append(t2[i2])
            i2 += 1
    
    while i1 < len(t1):
        res.append(t1[i1])
        i1 += 1
    
    while i2 < len(t2):
        res.append(t2[i2])
        i2 += 1
    return res


n = int(input())
v = list(map(int, input().split()))

v = Msort(v)

for el in v:
    print(el, end=" ")
