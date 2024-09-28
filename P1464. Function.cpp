#include <iostream>
#include <algorithm>
#include <cstring>
#define L long long

using namespace std;

L answer[25][25][25];

// 递归函数w，根据输入的三个参数a, b, c计算结果
// 使用记忆化存储中间结果以优化递归调用
L w(L a, L b, L c) {
    if (a <= 0 || b <= 0 || c <= 0) {
        return 1;
    } else if (a > 20 || b > 20 || c > 20) {
        L r = w(20, 20, 20);
        if (answer[20][20][20] == -1)
            answer[20][20][20] = r;
        return r;
    } else if (answer[a][b][c] != -1) {
        return answer[a][b][c];
    } else if (a < b && b < c) {
        L resA = w(a, b, c - 1);
        L resB = w(a, b - 1, c - 1);
        L resC = w(a, b - 1, c);
        answer[a][b][c] = resA + resB - resC;
        if (answer[a][b][c - 1] == -1) 
            answer[a][b][c - 1] = resA;
        if (answer[a][b - 1][c - 1] == -1) 
            answer[a][b - 1][c -1] = resB;
        if (answer[a][b - 1][c] == -1) 
            answer[a][b - 1][c] = resC;
        return answer[a][b][c];
    } else {
        L resA = w(a - 1, b, c);
        L resB = w(a - 1, b - 1, c);
        L resC = w(a - 1, b, c - 1);
        L resD = w(a - 1, b - 1, c - 1);
        answer[a][b][c] = resA + resB + resC - resD;
        
        if (answer[a - 1][b][c] == -1)
            answer[a - 1][b][c] = resA;
        if (answer[a - 1][b - 1][c] == -1)
            answer[a - 1][b - 1][c] = resB;
        if (answer[a - 1][b][c - 1] == -1)
            answer[a - 1][b][c - 1] = resC;
        if (answer[a - 1][b - 1][c - 1] == -1)
            answer[a - 1][b - 1][c - 1] = resD;
        return answer[a][b][c];
    }
}

// 主函数，初始化answer数组并读取输入，调用w函数计算结果并输出
int main()
{   
    L a, b, c;

    memset(answer, -1, sizeof(answer));

    while (cin >> a >> b >> c) {
        if (a == -1 && b == -1 && c == -1) {
            break;
        } else {
            printf("w(%lld, %lld, %lld) = %lld\n", a, b, c, w(a, b, c));
        }
    }
    
    return 0;
}