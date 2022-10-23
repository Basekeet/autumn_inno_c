n = int(input())
a = list(map(int ,input().split()))

a.sort(key = lambda x: x % 10)

print(" ".join(list(map(str, a))))