// 2023.03.10 jinseong
// 문자와 문자열
// 5-1

#include <stdio.h>

int main(){
    char a[1000];
    int n;
    scanf("%s",a);
    scanf("%d",&n);
    printf("%c",a[n-1]);
    return 0;
}