// 2023.03.04 jinseong
// 빠른 입력
// 3-6

#include<iostream>
using namespace std;


int main(){
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int n,a,b;
    cin >> n;
    int c[n];
    int i;
    for(i =0;i!=n;i++){
        cin >> a >> b;
        c[i] = a+b;
    }
    
    for(i = 0;i!=n;i++){
        cout << c[i] << "\n";
    }
    return 0;
    
}

