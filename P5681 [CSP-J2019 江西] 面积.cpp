#include <iostream>

using namespace std;

int main()
{
    long long a, b, c;
    cin >> a >> b >> c;

    // if (a * a <= 0 && b * c <= 0) {
    //     if (a * a <= b * c) {
    //         cout << "Alice";
    //     } else {
    //         cout << "Bob";
    //     }
    // }

    if (a * a > b * c) {
        cout << "Alice";
    } else {
        cout << "Bob";
    }
    
    return 0;
}
