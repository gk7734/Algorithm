n = int(input())
arr = [[0 for j in range(2)] for i in range(n)]
for i in range(n):
    a, b = map(int, input().split())
    arr[i] = [b, a]
arr.sort()
for i in range(n):
    print(f"{arr[i][1]} {arr[i][0]}")