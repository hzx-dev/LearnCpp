#include <iostream>
#include <vector>
#include <algorithm> // 阿拉公瑞募

using namespace std;

// 非常经典的动态规划问题——最长上升子序列

vector<int> verygoodlist;
vector<int> verygooddplist;

// 佛祖保佑，永无BUG！

// 动态规划的思路：
// 1. 定义状态：dp[i]表示以第i个元素结尾的最长上升子序列的长度
// 2. 转移方程：如果第i个元素比第j个元素小，则dp[i] = max(dp[i], dp[j]+1)
// 3. 初始条件：dp[0] = 1
// 4. 结果：dp[n-1]即为最长上升子序列的长度。 // 乱写的

// 时间复杂度：O(n^2)

int main()
{
    int n;

    cin >> n;
    
    for (int i = 0; i < n; i++) {
        int tmp;
        cin >> tmp;
        verygoodlist.push_back(tmp);
    }

    for (int i = 0; i < n; i++) {
        verygooddplist.push_back(1);
        for (int j = 0; j < i; j++) {
            if (verygoodlist[j] < verygoodlist[i]) {
                verygooddplist[i] = max(verygooddplist[i], verygooddplist[j] + 1);
            }
        } // 大功告成，嘿嘿嘿
    }

    int max_element_heihei = *max_element(verygooddplist.begin(), verygooddplist.end());

    cout << max_element_heihei << endl;

    return 0;
}
