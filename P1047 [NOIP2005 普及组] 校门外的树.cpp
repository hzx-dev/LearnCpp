#include <iostream>
#include <cstring>

using namespace std;

int map[10005];

int main()
{
    int l;
    cin >> l;
    
    for (int i = 0; i <= l; i++) map[i] = 1;

    int m;
    cin >> m;

    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        for (int j = a; j <= b; j++) map[j] = 0;
    }

    int n = 0;

    for (int i = 0; i <= l; i++) n += map[i];

    cout << n << endl;
    
    return 0;
}
