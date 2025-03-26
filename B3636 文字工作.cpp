#include <iostream>

using namespace std;

int n, a[1145140];

int main()
{
    cin >> n;

    a[0] = 0;

    for (int i = 2; i <= n; i++)
    {
        a[i] = a[i - 1] + 1;

        if (i % 2 == 0)
        {
            a[i] = min(a[i / 2] + 1, a[i]);
        }
    }

    cout << a[n];

    return 0;
}