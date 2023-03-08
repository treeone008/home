// 2023.03.08 jinseong
// 공 넣기
// 4-5

#include <stdio.h>

int main(){
    int n,m;
    scanf("%d %d",&n, &m);
    int s[n];
    for(int i=0; i<n;i++){
        s[i] = 0;
    }
    for(int i=0; i<m;i++){
        int a,b,c;
        scanf("%d %d %d",&a, &b,&c);
        
        while(a<=b){
            s[a-1]=c;
            a++;
        }
    }
    for(int i=0; i<n;i++){
        printf("%d " ,s[i]);
    }
}