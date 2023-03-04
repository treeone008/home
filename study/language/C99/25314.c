// 2023.03.04 jinseong
// 입력 값 분석
// 3-5

#include <stdio.h>

int main(){
    int a;
    scanf("%d", &a);
    for(int i=0; a>=4; i++){
        a-=4;
        printf("long ");
    }
    printf("int");
    return 0;
}