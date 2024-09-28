#include <iostream>

using namespace std;

int main()
{
    int a, b;
    string s;
    int cnt = 0;

    cin >> a >> b;

    for (int i = a; i <= b; i++) {
        s = to_string(i);
        int len = s.length();
        int count = 0;
        for (int j = 0; j < len; j++)
            if (s[j] == '2') count++;
        cnt += count;
    }

    cout << cnt;
    
    return 0;
}
