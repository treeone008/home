// 2023.02.27 jinseong
// 곱하기 과정 출력
// 1-10
#include <stdio.h>

int main(){
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);

    int c,d,e;
    c = b/100;
    d = (b - c*100)/10;
    e = (b - c*100 - d*10);
    
    printf("%d\n%d\n%d\n",e*a,d*a,c*a);
    printf("%d\n",c*a*100+d*a*10+e*a);

    return 0;
}