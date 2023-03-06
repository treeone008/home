// 2023.03.06 jinseong
// a+b
// 3-12

#include <iostream>
using namespace std;

int main()
{
    int a[1000], b[1000];
    int c = 0;
    for (int i = 0;; i++)
    {
        cin >> a[i] >> b[i];
        c++;
        if (cin.eof() == true)
        {
            break;
        }
    }
    for (int i = 0; i < c - 1; i++)
    {
        cout << a[i] + b[i] << endl;
    }
    return 0;
}