#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int num_len(int n)
{
    int len = 0;
    if(n <= 0) len ++;
    while(n)
    {
        len ++;
        n /= 10;
    }
    return len;
}

int main()
{
    string str;
    char c;
    int a, b;
    int n;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> str;
        if (isdigit(str[0])) {
            a = stoi(str);
            cin >> str;
            b = stoi(str);
        }
        else {
            c = str[0];
            cin >> str;
            a = stoi(str);
            cin >> str;
            b = stoi(str);
        }
        switch (c) {
            case 'a': cout << a << "+" << b << "=" << a + b << endl; break;
            case 'b': cout << a << "-" << b << "=" << a - b << endl; break;
            case 'c': cout << a << "*" << b << "=" << a * b << endl; break;
            default: break;
    }
    cout << num_len(a) + num_len(b) + 2 + num_len(a + b) << endl;
    }

    return 0;
}
