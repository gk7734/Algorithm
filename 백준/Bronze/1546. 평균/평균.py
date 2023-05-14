n = int(input())
a = list(map(int, input().split()))
b = max(a)
c = []
for i in range(n):
    d = a[i]/b*100
    c.append(d)
print(sum(c)/n)