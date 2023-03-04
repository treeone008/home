# 2023.03.04 jisneong
# 문자 숫자 같이 출력
# 3-7

import sys

n = int(input())
c = list(range(n))
for i in range(n):
    a,b = map(int,input().split())
    c[i] = a+b
    
for j in range(n):
    print(f"Case #{j+1}: {c[j]}")