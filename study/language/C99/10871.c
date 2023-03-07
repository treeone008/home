// 2023.03.07 jinseong
// 특정값보다 작은수 배열에서 찾기
// 4-2

#include<stdio.h>

int main(){
    int n,a;
    scanf("%d %d", &n, &a);
    int b[n];
    for(int i=0; i<n; i++)
        scanf("%d", &b[i]);
    for(int i=0; i<n; i++){
        if(b[i]<a){
            printf("%d ",b[i]);
        }
    }
    return 0;
}