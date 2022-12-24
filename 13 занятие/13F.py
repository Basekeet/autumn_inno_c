g = [[] for i in range(1001)]
dist = [-1 for i in range(1001)]
n, x = map(int ,input().split())

for i in range(1, n + 1):
    t = list(map(int ,input().split()))
    for j in range(1, n + 1):
        if t[j - 1] == 1:
            g[i].append(j)

import queue

q = queue.Queue()

q.put(x)
dist[x] = 0

while not q.empty():
    t = q.get()

    for el in g[t]:
        if dist[el] == -1:
            dist[el] = dist[t] + 1
            q.put(el)

for i in range(1, n + 1):
    print(dist[i], end=" ")
