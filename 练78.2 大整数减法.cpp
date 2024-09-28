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
    for(int i = 1; i <= len1; i++){
        a[i] = s1[len1 - i] - '0';}
    for(int i = 1; i <= len2; i++)
        b[i] = s2[len2 - i] - '0';
    int len = len1;

    // 开始减法。

    for (int i = 1; i <= len; i++)
    {
        if (a[i] >= b[i]) {
            a[i] -= b[i];
        }
        else {
            // 要借位
            a[i + 1]--;
            a[i] += 10 - b[i];
        }
    }

    // 大功告成！
    // len 这一位是不是 0
    while(a[len] == 0) len--; // 去除前导零
    for(int i = len; i > 0; i--)
        cout << a[i];

    return 0;
}
