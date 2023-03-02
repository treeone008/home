// 2023.03.02 jinseong
// 시 분 더하기
// 2-6

#include <stdio.h>

int main()
{
    int a, b, c;
    scanf("%d %d", &a, &b);
    scanf("%d", &c);
    b += c;
    if (b >= 60)
    {
        a += b / 60;
        b = b % 60;
    }
    if (a >= 24)
    {
        a -= 24;
    }
    printf("%d %d", a, b);

    return 0;
}