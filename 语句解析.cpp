#include <cstdio>
#include <iostream>
#include <string>

using namespace std;

int main(){

    string str;

    cin >> str;
    string a, b, c;

    for (int i = 0; i <= str.length(); i += 2) {
        if (str[i] == 'a') {
            i += 3;
            for (int j = i; str[j] != ';'; j++) {
                a += str[j];
            }
        } else
        if (str[i] == 'b') {
            i += 3;
            for (int j = i; str[j] != ';'; j++) {
                b += str[j];
            }
        } else
        if (str[i] == 'c') {
            i += 3;
            for (int j = i; str[j] != ';'; j++) {
                c += str[j];
            }
        }
    }

    if (a == "b") a = b;
    if (a == "c") a = b;
    if (b == "c") c = b;
    if (b == "a") b = a;
    if (c == "a") c = a;
    if (c == "b") c = a;

    cout << a << " " << b << " " << c;

    return 0;
}