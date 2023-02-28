# 2023.02.26 jinseong
# 나머지 값 계산
# 1-9
a,b,c = map(int,input().split())
print((a+b)%c)
print(((a%c)+(b%c))%c)
print((a*b)%c)
print(((a%c)*(b%c))%c)
