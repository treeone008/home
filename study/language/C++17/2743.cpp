// 2023.03.10 jinseong
// 단어 길이 
// 5-2

#include <iostream>
using namespace std;

int main(){
    char a[1000];
    int n;
    cin >> a;
    for(int i=0;; i++){
        if(a[i] == 0){
            n = i;
            break;
        }
    }
    cout << n << endl;
    return 0;
}