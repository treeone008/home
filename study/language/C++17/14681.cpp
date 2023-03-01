// 2023.03.01 jinseong
// 사분면 구분
// 2-4

#include <iostream>
using namespace std;

int main(){
    int x,y;
    cin >> x >> y;
    if(x>0&&y>0){
        cout << "1";
    }
    else if(x<0&&y>0){
        cout << "2";
    }
    else if(x<0&&y<0){
        cout << "3";
    }
    else{
        cout << "4";
    }
}