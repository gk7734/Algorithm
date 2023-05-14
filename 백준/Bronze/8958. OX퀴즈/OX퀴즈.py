n = int(input())
sum = []
for i in range(n):
    cnt = 0
    qw = 0
    a = input()
    for j in a:
        if j == "O":
            cnt+=1
            qw+=cnt
        else:
            cnt = 0
    sum.append(qw)
    print(sum[i])