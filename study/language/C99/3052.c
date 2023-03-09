// 2023.03.09 jinseong
// 나머지
// 4-8

#include <stdio.h>

int main(){
    int a[10];
    int b[10];
    int c=0;
    for (int i=0; i<10; i++){
        scanf("%d" , &a[i]);
        b[i] = a[i]%42;
    }
    for (int i=0; i<10; i++){
        for (int j=i+1; j<10; j++){
            if(b[i]==b[j]){
                c--;
                break;
            }
        }
        c++;
    }
    printf("%d", c);
    return 0;
}