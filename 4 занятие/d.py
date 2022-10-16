def f (t, n):
    return t // x + t // y + 1 >= n

def binsearch(c, n):
    l = -1
    r = n
    while r - l > 1:
        mid = (r + l) // 2
        if (f(mid, c)):
            r = mid
        else:
            l = mid
    return r

n, x, y = map(int, input().split())

if n == 1:
    print(min(x, y))
else:
    print(binsearch(n, n * max(x,y)) + min(x, y))