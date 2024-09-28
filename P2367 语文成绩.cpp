#include <iostream>

using namespace std;

int cf[5000001]; // 差分数组
int a[5000001]; // 原始数组

int main()
{
    // 此题需要使用差分
    
    int n, p;
    cin >> n >> p;

    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    // 差点忘记构造差分数组了

    for (int i = 1; i <= n; i++) {
        cf[i] = a[i] - a[i-1];
    }

    for (int i = 0; i < p; i++) {
        int x, y, z;
        cin >> x >> y >> z;
        cf[x] += z;
        cf[y+1] -= z;
    }

    // 进行前缀和

    int min = 1000000;

    for (int i = 1; i <= n; i++)
    {
        a[i] = a[i-1] + cf[i];
        if (a[i] < min) {
            min = a[i];
        }
    }

    cout << min << endl;

    return 0;
}
