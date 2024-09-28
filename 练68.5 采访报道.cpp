#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main()
{
    string s;

    getline(cin, s);

    int dot = 0;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '.') {
            dot++;
        }
    }
    
    cout << s << endl;
    cout << s.size() << endl << dot << endl;
    
    return 0;
}
