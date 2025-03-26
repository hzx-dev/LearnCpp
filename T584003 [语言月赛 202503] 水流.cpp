#include <iostream>

using namespace std;

int a, b, c;

int main() {
    cin >> a >> b >> c;

    if (a <= c && b <= c) {
        cout << "None";
    } else if (a == b) {
        cout << "None" << endl;
        return 0;
    } else if (a < b) {
        cout << "RightToLeft" << endl;
    } else {
        cout << "LeftToRight" << endl;
    }
    
    return 0;
}
