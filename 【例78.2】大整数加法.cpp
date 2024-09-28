#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int a[205];
int b[205];

// 写个输出函数。
void print(int arr[], int n)
{
    for(int i = 1; i <= n; i++)
        cout <<  arr[i] << ' ';
    cout << endl;
}

int main()
{   
    string s1, s2;
    cin >> s1 >> s2;
    int len1 = s1.size();
    int len2 = s2.size();
    int idx = 0;
    for(int i = len1 - 1; i >= 0; i--)
        a[++idx] = s1[i] - '0';
    idx = 0;
    for(int i = len2 - 1; i >= 0; i--)
        b[++idx] = s2[i] - '0';
    int len = max(len1, len2) + 1;

    // 开始加法。

    for (int i = 1; i <= len; i++) {
        b[i + 1] += (a[i] + b[i]) / 10;  // 1 产生进位， 0：没有进位, 处理进位
        b[i] = (a[i] + b[i]) % 10;
    }

    // 大功告成！
    // len 这一位是不是 0
    while(b[len] == 0) len--; // 去除前导零
    for(int i = len; i >= 1; i--)
        cout << b[i];

    return 0;
}
