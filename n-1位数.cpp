#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n;

    cin >> n;

    for (int i = 1; i <= n; i++) {
        string s;
        cin >> s;

        s = s.substr(1, s.size());
        cout << stoi(s) << endl;
    }
    
    return 0;
}
