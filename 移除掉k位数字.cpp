#include <bits/stdc++.h>

using namespace std;

string removeKdigits(string num, int k) {
    vector<char> stk;
    for (auto& digit: num) {
        while (stk.size() > 0 && stk.back() > digit && k) {
            stk.pop_back();
            k -= 1;
        }
        stk.push_back(digit);
    }

    for (; k > 0; --k) {
        stk.pop_back();
    }

    string ans = "";
    bool isLeadingZero = true;
    for (auto& digit: stk) {
        if (isLeadingZero && digit == '0') {
            continue;
        }
        isLeadingZero = false;
        ans += digit;
    }
    return ans == "" ? "0" : ans;
}

int main()
{   
    freopen("input.in", "r", stdin);
    freopen("output.out", "w", stdout);
    int k;
    string num;
    cin >> num >> k;
    cout << removeKdigits("1432219", 3) << endl; // 1219

    // 作者：力扣官方题解
    // 链接：https://leetcode.cn/problems/remove-k-digits/solutions/484940/yi-diao-kwei-shu-zi-by-leetcode-solution/
    // 来源：力扣（LeetCode）
    // 著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。
    
    return 0;
}
