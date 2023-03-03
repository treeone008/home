// 2023.03.03 jinseong
// 1부터 n까지의 합
// 3-3

#include<iostream>
using namespace std;

int main(){
    int n, s=0;
    cin >> n;   
    for(int i=1;i<n+1;i++){
        s+=i;
    }
    cout << s;
    return 0;
}