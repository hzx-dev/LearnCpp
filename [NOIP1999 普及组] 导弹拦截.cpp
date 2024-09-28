#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

// 某国为了防御敌国的导弹袭击，发展出一种导弹拦截系统。但是这种导弹拦截系统有一个缺陷：虽然它的第一发炮弹能够到达任意的高度，但是以后每一发炮弹都不能高于前一发的高度。某天，雷达捕捉到敌国的导弹来袭。由于该系统还在试用阶段，所以只有一套系统，因此有可能不能拦截所有的导弹。

// 输入导弹依次飞来的高度，计算这套系统最多能拦截多少导弹，如果要拦截所有导弹最少要配备多少套这种导弹拦截系统。

int a[1000000];
vector<int> m;
vector<int> f;

int main()
{
    int i = 0;
    while (cin >> a[++i]);
    // for (auto f : a) cout << f << " ";

    // 解决第一个问题：这套系统最多能拦截多少导弹
    // 其实就是求最长不上升子序列的长度，用贪心

    f.push_back(a[1]);
    for (int j = 2; j <= i; j++) {
        if (a[j] <= f[f.size() - 1]) {
            // 直接添加到末尾即可
            f.push_back(a[j]);
            continue;
        }
        // 手搓二分查找插入位置
        int left = 0, right = f.size() - 1;
        while (left < right) {
            int mid = (left + right) / 2;

            if (f[mid] > a[j]) {
                // a[j] 在 右边
                left = mid + 1;
            } else {
                right = mid;
            }
        }
        f[left] = a[j];
        // 手搓成功！
    }
    cout << f.size() << endl;

    // for (auto s : f) cout << s << " ";

    // 第二问的解：最长上升子序列
    m.push_back(a[1]);
    for (int j = 2; j <= i; j++) {
        if (a[j] >= a[m.size() - 1]) {
            // 直接添加到末尾即可
            m.push_back(a[j]);
            continue;
        }
        *lower_bound(m.begin(), m.end(), a[j]) = a[j];
    }

    cout << m.size() << endl;

    return 0;
}
