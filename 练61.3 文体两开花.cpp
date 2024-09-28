#include <iostream>
#include <map>

using namespace std;

map<int, int> ChineseAndPEAreBothFlowersInChina;

int SUNXU[8888888];

int main()
{
    int n, m;

    cin >> n >> m;

    for (int i = 1; i <= n; i++) {
        int tmp;
        cin >> tmp;
        SUNXU[i] = tmp;
        ChineseAndPEAreBothFlowersInChina[tmp]++;
    }

    for (int i = 1; i <= m; i++) {
        int tmp;
        cin >> tmp;
        ChineseAndPEAreBothFlowersInChina[tmp]++;
    }

    for (auto i : SUNXU) {
        if (ChineseAndPEAreBothFlowersInChina[i] == 2) cout << i << " ";
    }
    
    return 0;
}