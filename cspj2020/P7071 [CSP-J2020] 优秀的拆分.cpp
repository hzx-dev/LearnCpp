#include <iostream>
#include <vector>

using namespace std;

vector<int> s;

int good_split(int n) {
    if (n <= 1) return false; // 终止条件
    if (n % 2 == 1) return false; // 奇数
    if (n % (n - 1) == 0) {
        s.push_back(n); // 2的幂, 直接输出
        return true;
    }

    int t = 1, res = 0;

    for (int i = 0; i < n; i++) {
        if (t * 2 > n) {
            res = i - 1;
            s.push_back(t);
            return good_split(n - t); // 递归, 继续拆分
        }
        t *= 2; // 2的幂
    }
}

int main() {

    // freopen(); // 比赛的时候千万记得！！！

    int n;
    cin >> n;

    // 判断优秀的拆分：是2的整数次幂，不是奇数
    good_split(n);

    if (s.empty()) cout << -1;

    for (int i = 0; i < s.size(); i++) {
        cout << s[i] << " ";

    }


    return 0;
}
