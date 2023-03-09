// 2023.03.09 jinseong
// 바구니 뒤집기
// 4-9

#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int c[n];
    int d[n];
    for (int i = 0; i < n; i++)
    {
        c[i] = i;
        d[i] = i;
    }
    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        for (int j = 0; a + j < b; j++)
        {
            c[a + j-1] = d[b - j-1];
            c[b - j-1] = d[a + j-1];
        }
        for (int k = 0; k < n; k++)
        {
            d[k] = c[k];
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << c[i]+1 << " ";
    }
    return 0;
}