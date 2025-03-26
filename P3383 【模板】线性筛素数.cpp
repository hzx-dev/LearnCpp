#include <iostream>

using namespace std;

int zs[10000005];
bool a[100000005];
int cnt;

int main()
{
    int n, q, k;
    
    ios::sync_with_stdio(false);

    cin >> n >> q;

    a[0] = a[1] = 1;
    for (int i = 2; i * i <= n; i++)
        if (a[i] == 0)
            for (int j = i + i; j <= n; j += i)
                a[j] = 1;
    for (int i = 2; i <= n; i++)
        if(!a[i]) // 如果 i 没被筛掉
            zs[++cnt] = i;

    while(q--) {
        int tmp;
        cin >> tmp;
        cout << zs[tmp] << endl;
    }
    return 0;
}
