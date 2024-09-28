#include <iostream>
#include <string>

using namespace std;

string decode() {
    char c;
    string str = "";
    while (cin >> c) {
        if (c == '[') {
            int n;
            cin >> n;
            string strSub = decode();
            while (n--) str += strSub;
        }
        else if (c == ']') {
            // 说明处理的是[]中的内容
            return str;
        } else {
            str += c;
        }
    }
    return str;
}

int main()
{
    
    cout << decode() << endl;

    return 0;
}