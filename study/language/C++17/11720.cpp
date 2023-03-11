// 2023.03.11 jinseong
// 숫자의 합
// 5-5

#include <iostream>
using namespace std;

int main()
{
    int n, a, sum;
    cin >> n;
    int m[n];
    sum = 0;
    for (int i = 0; i < n; i++)
    {
        char a;
        cin >> a;
        sum += a - 48;
    }
    cout << sum << endl;
    return 0;
}