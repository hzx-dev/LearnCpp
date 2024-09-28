#include <iostream>
#include <deque>

using namespace std;

int a[1000005];
int ansa[1000005]; // 存放最小值
int ansb[1000005]; // 存放最大值

int main()
{
    int n, k;

    cin >> n >> k;

    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }

    deque<int> minDeque; // 存储最小值的单调队列
    deque<int> maxDeque; // 存储最大值的单调队列

    for (int i = 1; i <= n; i++) {
        // 清除不在窗口范围内的元素
        if (!minDeque.empty() && minDeque.front() < i - k + 1) {
            minDeque.pop_front();
        }
        if (!maxDeque.empty() && maxDeque.front() < i - k + 1) {
            maxDeque.pop_front();
        }

        // 维护最小值单调队列
        while (!minDeque.empty() && a[minDeque.back()] >= a[i]) {
            minDeque.pop_back();
        }
        minDeque.push_back(i);

        // 维护最大值单调队列
        while (!maxDeque.empty() && a[maxDeque.back()] <= a[i]) {
            maxDeque.pop_back();
        }
        maxDeque.push_back(i);

        // 记录结果
        if (i >= k) {
            ansa[i - k + 1] = a[minDeque.front()];
            ansb[i - k + 1] = a[maxDeque.front()];
        }
    }

    for (int i = 1; i <= n - k + 1; i++) {
        cout << ansa[i] << " ";
    }

    cout << endl;

    for (int i = 1; i <= n - k + 1; i++) {
        cout << ansb[i] << " ";
    }

    return 0;
}
