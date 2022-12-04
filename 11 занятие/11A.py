import heapq

a = []
n = int(input())

for i in range(n):
    s = list(map(int, input().split()))
    if s[0] == 0:
        heapq.heappush(a, -s[-1])
    else:
        t = heapq.heappop(a)
        print(-t)
    