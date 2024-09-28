#include <iostream>
#define L long long

using namespace std;

L result[5005] = {0, 1, 2};

L climbStairs(int n) {
    if (result[n] != 0) {
        return result[n];
    } else {
        L resA = climbStairs(n - 1);
        L resB = climbStairs(n - 2);
        result[n] = resA + resB;
        if (result[n - 1] == 0) result[n - 1] = resA;
        if (result[n - 2] == 0) result[n - 2] = resB;
        return result[n];
        // return resA + resB;
    }
}

int main()
{
    int n;
    cin >> n;

    // 使用递归算法计算
    cout << climbStairs(n) << endl;

    return 0;
}
