// 2023.03.01 jinseong
// 주사위 세 개
// 2-7

#include <iostream>
using namespace std;

int main(){
    int a,b,c;
    cin >> a >> b >> c;
    int d;

    if (a==b&&b==c){
        d = 10000 + a*1000;
    }
    else if(a==b || b==c){
        d = 1000 + b*100;
    }
    else if(a==c){
        d = 1000 + a*100;
    }
    else{
        if (a>b){
            if(a>c){
                d= a*100;
            }
            else
                d=c*100;
        }
        else if(b>c){
            d = b*100;
        }
        else{
            d = c*100;
        }
    }
    cout << d;
    return 0;
}