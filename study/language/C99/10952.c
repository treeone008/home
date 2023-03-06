// 2023.03.06 jinseong
// a+b
// 3-11

#include <stdio.h>

int main()
{
    int a[1000], b[1000];
    int c = 0;
    for (int i = 0;; i++)
    {
        scanf("%d %d", &a[i], &b[i]);
        c++;
        if (a[i] == 0 && b[i] == 0)
        {
            break;
        }
    }
    for (int i = 0; i < c - 1; i++)
    {
        printf("%d\n", a[i] + b[i]);
    }
    return 0;
}