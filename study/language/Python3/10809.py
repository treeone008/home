# 2023.03.11 jinseong
# 알파벳 찾기
# 5-6

import sys
b = input()
a = 'abcdefghijklmnopqrstuvwxyz'

for c in a:
    if c in b:
        print(b.index(c), end=' ')
    else:
        print(-1, end=' ')
print()