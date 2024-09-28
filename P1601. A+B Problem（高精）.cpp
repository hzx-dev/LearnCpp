#include <iostream>
#include <string>

using namespace std;

int a[505], b[505], result[505];
string sa, sb;

void printResult(int len_result) {
    for (int i = len_result; i >= 0; i--) {
        cout << result[i];
    }
}

void highPrecisionAdd() {
    int len_result = max(sa.length(), sb.length()) + 2;
    for (int i = 0; i < len_result; i++) {
        // 逐位相加
        result[i] += a[i] + b[i];
    }

    // 处理进位

    for (int i = 0; i <= len_result; i++) {
        result[i + 1] += result[i] / 10;
        result[i] %= 10;
    }

    // 去掉前导0
    // Update: 但是这样会过不了样例4，因为长度是0!!! 一定要加一个判断长度的条件！！！

    while (result[len_result] == 0 && len_result > 0) len_result--;

    // for (int i = 0; i < len_result; i++) {
    //     cout << result[i] << " ";
    // }
    
    // 输出结果
    printResult(len_result);
}

void processInput() {
    cin >> sa >> sb;
    // 逆序存储
    int len_a = sa.length();
    int len_b = sb.length();
    for (int i = 0; i < len_a; i++) {
        a[len_a - 1 - i] = sa[i] - '0';
    }

    for (int i = 0; i < len_b; i++) {
        b[len_b - 1 - i] = sb[i] - '0';
    }

    return;
}

int main()
{

    processInput();
    highPrecisionAdd();

    return 0;
}
