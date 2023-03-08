// 2023.03.08 jinseong
// 공 바꾸기
// 4-6

#include <iostream>
using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    int s[n];
    for(int i=0; i<n; i++){
        s[i] = i+1;
    }
    for(int i=0; i<m; i++){
        int a,b,c;
        cin >> a >> b;
        c = s[a-1];
        s[a-1] = s[b-1] ;
        s[b-1] = c;
    }
    for(int i=0; i<n; i++){
        cout << s[i] << " " ;
    }
    return 0;
}