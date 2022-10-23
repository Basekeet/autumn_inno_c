v1, v2 = map(float, input().split())
a = float(input())
def dist(x):
    return ((1 - a) ** 2 + x**2) ** 0.5 / v1 + ((1 - x) ** 2 + a**2 )**0.5 / v2

curr = 0
step = 1
DX = 0.0000001

while step > DX:
    t1 = dist(curr + step)
    t2 = dist(curr + step + DX)
    if (t2 < t1):
        curr += step
    else:
        step /= 2
print(curr)
