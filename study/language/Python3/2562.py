# 2023.03.07 jinseong
# 최소 최대
# 4-4
import sys

a = [0 for _ in range(0,9)]
for i in range(0,9):
    a[i] = int(input())
b = a[0]
d = 0
for i in range(1,9):
    if a[i]> b:
        b = a[i]
        d= i
print(b, d+1);
