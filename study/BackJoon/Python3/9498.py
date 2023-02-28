# 2023.02.28 jinseong
# 점수 등급 측정
# 2-2
import sys

a = int(input())
if a >= 90 and a<= 100:{
    print("A")
}
elif a <90 and a>=80:{
    print("B")
}
elif a <80 and a>=70:{
    print("C")
}
elif a <70 and a>=60:{
    print("D")
}
elif a <60 and a>=0:{
    print("F")
}
