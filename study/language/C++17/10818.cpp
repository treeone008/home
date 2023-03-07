// 2023.03.07 jinseong
// 최소 최대
// 4-3

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int b = a[0];
    int c = a[0];
    for (int i = 0; i < n - 1; i++)
    {
        if (b < a[i + 1])
            b = a[i + 1];
        if (c > a[i + 1])
            c = a[i + 1];
    }
    cout << c << endl;
    cout << b << endl;
    return 0;
}