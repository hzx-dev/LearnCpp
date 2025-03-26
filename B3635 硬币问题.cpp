#include <iostream>

using namespace std;

int f[1000005];

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        f[i] = f[i - 1] + 1;

        if (i - 5 >= 0)
            f[i] = min(f[i], f[i - 5] + 1);

        if (i - 11 >= 0)
            f[i] = min(f[i], f[i - 11] + 1);
    }

    cout << f[n] << endl;

    return 0;
}