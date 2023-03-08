# 2023.03.08 jinseong
# 출석 확인
# 4-7

a = [None]*31
for i in range(28) :
    b = int(input())
    a[b] = 1
for i in range(1,31) :
    if a[i] == None:
        print(i)
        