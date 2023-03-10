# 2023.03.10 jinseong
# 문자열
# 5-3

t = int(input())
b = []
for i in range(t):
    a = input()
    b.append(a)
for i in b:
    print(i[0]+i[-1])