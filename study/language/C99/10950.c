// 2023.03.03 jinseong
// 반복 더하기
// 3-2

#include <stdio.h>

int main(){
    int n;
    int a,b;
    scanf("%d",&n);
    int c[n];
    int i;
    for(i =0;i!=n;i++){
        scanf("%d %d",&a,&b);
        c[i] = a+b;
    }
    for(i = 0;i!=n;i++){
        printf("%d\n",c[i]);
    }
    return 0;
}