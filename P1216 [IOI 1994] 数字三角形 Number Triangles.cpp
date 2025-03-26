#include <iostream>

using namespace std;

int a[1005][1005], f[1145][1145], r;

void input()
{
    cin >> r;

    for (int i = 1; i <= r; i++)
        for (int j = 1; j <= i; j++)
            cin >> a[i][j];
}

void run()
{
    f[1][1] = a[1][1];

    for (int i = 2; i <= r; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            f[i][j] = f[i - 1][j] + a[i][j]; // 上方继承
            if (j - 1 > 0)
            {
                // 某有越界
                f[i][j] = max(f[i][j], f[i - 1][j - 1] + a[i][j]);
            }
        }
    }
}

void output()
{
    int ans = -114514;

    for (int i = 1; i <= r; i++)
    {
        ans = max(ans, f[r][i]);
    }

    cout << ans;
}

int main()
{
    input();
    run();
    output();

    return 0;
}
