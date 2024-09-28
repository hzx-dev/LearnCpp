#include <iostream>
#include <string>

using namespace std;

const int city[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'R', 'S', 'T'};

int main()
{
    int n;
    int cnt = 0;

    cin >> n;

    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        bool is_jq = true;
        for (int i = 0; i < 10; i++) {
            if (city[i] == s[0]) {
                is_jq = false;
                break;
            }
        }
        if (is_jq) {
            cnt++;
        }
    }

    cout << cnt << endl;
    
    return 0;
}
