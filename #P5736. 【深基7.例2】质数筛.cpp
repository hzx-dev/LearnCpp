// Author: Kevin
// 这东西真的是我写的，除了注释都是我一行一行敲的。
// This is the solution of P5736.【深基7.例2】质数筛 by Kevin.

#include <iostream>

using namespace std;

bool is_prime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main()
{
    int n;

    cin >> n;

    int list[n];
    
    for (int i = 0; i < n; i++) {
        cin >> list[i];
    }

    for (int i = 0; i < n; i++) { 
        if (is_prime(list[i])) {
            cout << list[i] << " ";
        }
    }

    return 0;
}

