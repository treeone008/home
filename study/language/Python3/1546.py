# 2023.02.24 jinseong
# 평균
# 4-10

n = int(input())
b = [None]*n;
b = list(map(float, input().split()))
max = b[0]
avg = 0
for i in range(1,n):
    if b[i] > max :
        max = b[i]
for i in range(n):
    b[i] = b[i]/max*100
    avg = avg + b[i]
avg = avg/n;
print(avg)
