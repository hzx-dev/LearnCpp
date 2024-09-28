#include <cmath>
#include <iostream>
#include <string>

using namespace std;

int main(){

    int n, c;

    cin >> n;
    c = n;
    n = 1;

    for (int i=0; i < c; i++) {
        n *= 1992;
        n %= 100;
    }

    cout << n;

    return 0;
}