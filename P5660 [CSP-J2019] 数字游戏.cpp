#include <iostream>

using namespace std;

int main()
{
    char c;
    int cnt = 0;
    
    while (cin >> c) {
        if (c == '1') {
            cnt++;
        }
    }

    cout << cnt << endl;
    
    return 0;
}
