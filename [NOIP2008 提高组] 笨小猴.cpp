#include <iostream>
#include <string>

using namespace std;

int value[100] = {0};

int getValue(char c) {
    return value[int (c)];
}

bool isPrime(int n) {
    if (n <= 1) return 0;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    string s;
    cin >> s;

    for (int i = 0; i < s.length(); i++) {
        value[int (s[i] - 'a')]++;
    }

    int maxn=-1, minn=999;

    for (int i = 0; i < 100; i++) {
        if (value[i] > maxn) maxn = value[i];
        if (value[i] < minn && value[i] != 0) minn = value[i];
    }   
    
    if (isPrime(maxn - minn)) cout << "Lucky Word" << endl << maxn - minn;
    else cout << "No Answer" << endl << 0;

    return 0;
}