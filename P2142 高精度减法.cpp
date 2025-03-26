#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int a[10086];
int b[10086]; // 储存结果

int main()
{   
    string s1, s2;
    cin >> s1 >> s2;
    int len1 = s1.size();
    int len2 = s2.size();
    int idx = 0;
    bool underZero = false;
    
    if ((s1 < s2 && s1.size() == s2.size()) || (s1.size() < s2.size())) {
        swap(s1, s2); underZero = true;
    }

    for(int i = len1 - 1; i >= 0; i--)
        a[++idx] = s1[i] - '0';
    idx = 0;
    for(int i = len2 - 1; i >= 0; i--)
        b[++idx] = s2[i] - '0';
    int len = max(len1, len2);

    // 开始减法。   

    for (int i = len; i >= 1; i--)
    {
        if (a[i] < b[i])
        {
            b[i + 1]--; // 退位
            a[i] += 10; // 进位
        }
        b[i] = a[i] - b[i];
    }

    // 大功告成！
    // len 这一位是不是 0
    if (underZero) cout << '-';
    while (b[len] == 0 && len > 0) len--; // 去除前导零
    if (len <= 0) cout << '0' << endl;
    for(int i = len; i >= 1; i--)
        cout << b[i];

    return 0;
}
