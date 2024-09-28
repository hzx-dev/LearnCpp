#include <iostream>
#include <vector>
#include <algorithm> // 差点忘记导入阿拉贡瑞慕了，for sort() function.

using namespace std;

// 烦恼的高考志愿（是解题更烦恼吧？）

vector<long long> a;

int main()
{
    long long n, m, t = 0;
    cin >> n >> m;
    
    for (long long i = 0; i < n; i++) {
        long long x;
        cin >> x;
        a.push_back(x);
    }

    // 二分要排序
    sort(a.begin(), a.end());

    for (long long i = 0; i < m; i++) {
        long long k;
        cin >> k;
        // 找到与k最接近的数
        auto idx = lower_bound(a.begin(), a.end(), k) - a.begin();
        if (idx == 0) t += abs(a[0] - k);//第一个
        else if (idx == n) t += abs(k - a[n - 1]);//（最后一个）找不到
        else t += min(abs(a[idx] - k), abs(k - a[idx - 1]));// 找到了 (要abs!!!不然会WA)
    }

    cout << t << endl;

    return 0;
}
