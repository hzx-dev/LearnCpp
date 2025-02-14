#include <iostream>
#include <map>
#include <cstdio>

using namespace std;

map<char, int> ds; // data_store
char ch,cc;
int tmp;

int main()
{
    while (scanf("%c:=%c;", &ch, &cc) == 2) {
        if (cc >= '0' && cc <= '9') {
            // 好耶！是一个数字！
            ds[ch] = cc - '0';
        } else {
            // 是一个变量
            ds[ch] = ds[cc];
        }
    }

    cout << ds['a'] << ' ' << ds['b'] << ' ' << ds['c'] << endl;
    
    return 0;
}
