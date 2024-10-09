#include <iostream>
#include <cmath>

using namespace std;

int gcd(int a, int b) { // 求最大公约数使用欧几里得算法
    if (b == 0) {
        return a;
    } else {
        return gcd(b, a % b);
    }
}

bool output_by_youlishu(int x) {
    int p = 0, q = 0;
    for (int i = 1; i <= x; i++) {
        if (x == i) {
            p = 1;
            q = i;
            break;
        } else if (x / i == (int)(x / i)) {
            p = (int)x / i;
            q = i;
            break;
        }
    }
    if (p == 0 && q == 0) {
        // 没有找到
        return false;
    }
    // 要约分！！！
    int g = gcd(p, q);
    p /= g;
    q /= g;
    cout << p << "/" << q << endl;
    return true;
}

int get_answer(int a, int b, int c) {
    // 检查是否存在实数解
    if ((b * b) - (4 * a * c) < 0) {
        // 没有实数解
        cout << "NO" << endl;
        return 0;
    } else {
        // 存在实数解，继续
        // a*x*x + b*x*x + c = 0;
        double x1 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
        double x2 = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);
        // 由有理数的定义，存在唯一的两个整数 p 和 q, 满足 q > 0, gcd(p, q) = 1 (两数互质),且 v = p / q
        double x = x1 > x2? x1 : x2;
        if (!output_by_youlishu(x)) {
            // x 可以被唯一表示为 q1 + q2 * sqrt(r) 的形式
            
        }
    }
}

int main()
{
    
    
    return 0;
}
