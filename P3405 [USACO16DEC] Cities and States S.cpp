#include <iostream>
#include <map>
#include <string>

using namespace std;

map<string, int> z; // 记录城市对数
int ans;
string a, b;
int n;

int main()
{
    cin >> n;

    while (n--)
    {
        cin >> a >> b;
        string cap = a.substr(0, 2);
        if (cap != b) ans += z[cap + b];
		z[b + cap]++;
    }
    cout << ans;
    
    return 0;
}
