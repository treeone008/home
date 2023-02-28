// 2023.02.28 jinseong
// 입력 받은 두 수 비교하기
// 2-1

#include <iostream>
using namespace std;

int main(){
    int a,b;
    cin >> a >> b;
    if(a > b){
        cout << ">";
    }
    else if(a < b){
        cout << "<";
    }
    else {
        cout << "==";
    }
    return 0;
}