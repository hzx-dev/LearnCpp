#include <iostream>
#include <cstring>
#include <string>

using namespace std;

// 。。。这道题要用到高精度。

class HighPrecision {
    int num[305];
    int len = 0;
    friend ostream& operator<< (ostream & out, HighPrecision & A);
    public:
    HighPrecision() {
        memset(num, 0, sizeof(num));
        len = 0;
    }
    HighPrecision(string n) {
        // 逆序存储
        for (int i = 0; i < n.length(); i++) {
            num[n.length() - i - 1] = n[i] - '0';
        }
        len = n.length();
    }
    HighPrecision operator+(HighPrecision& b) {
        int len_result = max(len, b.len) + 1;
        HighPrecision result;
        for (int i = 0; i < len_result; i++) {
            // 逐位相加
            result.num[i] += num[i] + b.num[i];
        }

        // 处理进位

        for (int i = 0; i <= len_result; i++) {
            result.num[i + 1] += result.num[i] / 10;
            result.num[i] %= 10;
        }

        while (result.num[len_result] == 0 && len_result > 0) len_result--;
        
        result.len = len_result;
        return result;
    }
    void output() {
        // 输出结果
        for (int i = len; i >= 0; i--) {
            cout << num[i];
        }
    }
};

ostream& operator<< (ostream & out, HighPrecision & A) {
    // 实现 operator<< 的逻辑
    for (int i = A.len; i >= 0; i--) {
        cout << A.num[i];
    }
    return out;
}

HighPrecision FibonacciHighPrecision(int n) {
    HighPrecision a("1"), b("1"), c("0");

    for (int i = 2; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }

    return c;
}

int main()
{
    int from, to;
    cin >> from >> to;

    HighPrecision result = FibonacciHighPrecision(to - from);

    cout << result << endl;
    
    return 0;
}
