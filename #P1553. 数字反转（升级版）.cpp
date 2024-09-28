#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <iomanip>

using namespace std;

unsigned long long reverse_longlong(unsigned long long num) {
    unsigned long long reversed_num = 0;
    while (num > 0) {
        reversed_num = reversed_num * 10 + num % 10;
        num /= 10;
    }
    return reversed_num;
}

int main()
{
    string num;

    getline(cin, num);
    
    // 判断是否为分数
    if (num.find('/') != string::npos) {
        // 分数反转
        string num1 = num.substr(0, num.find('/'));
        string num2 = num.substr(num.find('/') + 1);
        cout << reverse_longlong(stoull(num1)) << "/" << reverse_longlong(stoull(num2)) << endl; // 去0
    }
    // 判断是否为小数
    else if (num.find('.') != string::npos) {
        // 小数反转
        string int_part = num.substr(0, num.find('.'));
        string dec_part = num.substr(num.find('.') + 1);
        int int_part_reversed = reverse_longlong(stoull(int_part));
        int dec_part_reversed = reverse_longlong(stoull(dec_part));
        cout << fixed << setprecision(dec_part.length()) << int_part_reversed << "." << dec_part_reversed << endl; // 去0
    }
    // 百分数反转
    else if (num.find('%') != string::npos) {
        // 百分数反转
        string num1 = num.substr(0, num.find('%'));
        cout << (stoull(num1)) << "%" << endl; // 去0
        cout << reverse_longlong(stoull(num1)) << "%" << endl; // 去0
    }
    // 整数反转
    else {
        // cout << stoull(num) << endl; // 去0
        reverse(num.begin(), num.end());
        cout << stoull(num) << endl; // 去0
    }

    return 0;
}
