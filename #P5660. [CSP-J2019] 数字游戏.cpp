#include <iostream>

using namespace std;

int main()
{
    // This is the solution to the problem [CSP-J2019];

    char c;
    int cnt = 0;

    for (int i = 0; i < 8; i++) {
        cin >> c;
        if (c == '1') cnt++;
    }

    cout << cnt << endl;
    
    return 0;
}
