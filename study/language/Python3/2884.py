# 2023.03.01 jinseong
# 시간 계산
# 2-5
import sys

a,b = map(int,input().split())
if b<45 : 
    b+=15 
    if a==0 :
        a=23
    else :
        a-=1
else :
    b-=45

print(a,b)