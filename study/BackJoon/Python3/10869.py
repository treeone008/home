# 2023.02.25 jinseong
# A,B 사칙연산 출력
# 1-6
import sys
input = sys.stdin.readline

a, b = map(int, input().split()) # 한줄에 다 입력 받기 

print(int(a+b))
print(int(a-b))
print(int(a*b))
print(int(a//b))
print(int(a%b))
