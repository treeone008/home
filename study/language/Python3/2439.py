# 2023.03.05 jinseong
# 별찍기
# 3-10

import sys
n = int(input())
for i in range(1,n+1):
    a = "*"*i
    print(str(a).rjust(n))