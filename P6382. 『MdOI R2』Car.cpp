#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str;
    cin >> str;
    
    // 是否是外地车
    if (str.substr(0, 3) != "MDA") {
        cout << "1 1 1 1 1";
    } else {
        // 判断限行
        string id = str.substr(3);
        
        // 找到从右往左最后一位数字

        int idx = 0;

        for (int i = id.size() - 1; i >= 0; i--) {
            idx = i;
            if (id[i] >= '0' && id[i] <= '9') {
                break;
            }
        }

        // cout << "尾号是" << id[idx] << "的车";

        if (id[idx] == '1' || id[idx] == '9') {
            cout << "1 ";
        } else {
            cout << "0 ";
        }

        if (id[idx] == '2' || id[idx] == '8') {
            cout << "1 ";
        } else {
            cout << "0 ";
        }

        if (id[idx] == '3' || id[idx] == '7') {
            cout << "1 ";
        } else {
            cout << "0 ";
        }

        if (id[idx] == '4' || id[idx] == '6') {
            cout << "1 ";
        } else {
            cout << "0 ";
        }

        if (id[idx] == '5' || id[idx] == '0') {
            cout << "1 ";
        } else {
            cout << "0 ";
        }
    }

    return 0;
}
