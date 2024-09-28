// @Author  : Kevin

#include <iostream>
#include <map>
#include <string>

using namespace std;

int main(){

    map<char, int> verygoodname;
    string a;
    cin >> a;
    for (auto c : a) {
        verygoodname[c]++;
    }
    auto verygoodresult = *verygoodname.begin();
    
    int max = 0;
    char mx = 0;

    for (auto verygoodforname : verygoodname) {
        if (verygoodforname.second > max) {
            max = verygoodforname.second;
            mx = verygoodforname.first;
        }
    }

    cout << mx << " " << max;

    return 0;
}