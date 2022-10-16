a = []
def contains(c, n):
    l = 0
    r = n
    while (r - l > 1):
        mid = (r + l) // 2
        if (a[mid] == c):
            return True
        elif a[mid] < c:
            l = mid
        else:
            r = mid
    
    if l >= 0 and a[l] == c or r < n and a[r] == c:
        return True
    return False


n, k = map(int, input().split())
a = list(map(int, input().split()))
b = list(map(int, input().split()))

for i in range(len(b)):
    if contains(b[i], len(a)):
        print("YES")
    else:
        print("NO")