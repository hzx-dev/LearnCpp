// Author: Kevin
// 这东西真的是我写的，除了注释都是我一行一行敲的。
// This is the solution of P5737. 【深基7.例3】闰年展示.

#include <iostream>
#include <cstring>

using namespace std;

// 定义函数，判断是否为闰年
bool isLeapYear(int year)
{
    if ((year % 4 == 0 && year % 100!= 0) || year % 400 == 0)
        return true;
    else
        return false;
}

int main()
{
    int start, end;
    int count = 0;

    int years[3000] = {0};
    memset(years, 0, sizeof(years));

    cin >> start >> end;

    for (int i = start; i <= end; i++) {
        if (isLeapYear(i)) {
            years[i - start] = i;
            count++;
        }
    }

    cout << count << endl;

    for (int i : years) {
        if (i != 0) {
            cout << i << " ";
        }
    }
    
    return 0;
}

