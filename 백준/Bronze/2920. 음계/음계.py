arr = list(map(int, input().split()))
for i in range(8):
    if arr == [j for j in range(1, 9)]:
        print("ascending")
        break
    elif arr == [k for k in range(8, 0, -1)]:
        print("descending")
        break
    else:
        print("mixed")
        break