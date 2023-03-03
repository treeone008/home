# 2023.03.03 jinseong
# 비교
# 3-4
import sys

a = int (input())
b = int(input())
s = 0

for i in range(b) : 
    c,d = map(int,input().split())
    s += c*d    
    
if s==a :
    print("Yes")
else :
    print("No")