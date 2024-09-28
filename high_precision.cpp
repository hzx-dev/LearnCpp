#include <high_precision.h>
#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std;

HighPrecision::HighPrecision() {
    memset(numbers, 0, sizeof(numbers));
}

HighPrecision::HighPrecision(const string& str) {
    memset(numbers, 0, sizeof(numbers));
    // Convert string to high precision number

    for (int i = 0; i < str.size(); i++) {
        numbers[i] = str[i] - '0';
    }
}

HighPrecision operator+(const HighPrecision & num) {
    // @todo High precision
    return HighPrecision();
}

// HighPrecision operator+(long long num, const HighPrecision & n) {
//     return n + num;
// }
