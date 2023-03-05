// 2023.03.05 jinseong
// 중간과정 결과 출력
// 3-8

#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int a[n],b[n];
    for(int i=0; i<n; i++){
        scanf("%d %d" , &a[i],&b[i]);
    }
    for(int i=0; i<n; i++){
        printf("Case #%d: %d + %d = %d\n", i+1,a[i],b[i],a[i]+b[i]);
    }
    return 0;
}