#include <iostream>
#include <string>
#include <cmath>

using namespace std;

long long pow4[1000005];
long long pow5[1000005];

void initPowArray() {
    pow4[0] = 1;
    pow5[0] = 1;
    for (int i = 1; i < 1000005; i++) {
        pow4[i] = (pow4[i - 1] * 4) % 99824353;
        pow5[i] = (pow5[i - 1] * 5) % 99824353;
    }
}

int main()
{
    string str;

    long long oneCnt = 0, fourCnt = 0, fiveCnt = 0, chicken = 0;

    initPowArray();

    cin >> str;

    int m;
    cin >> m;

    for (int i = 0; i < str.length(); i++) {
        if (str[i] == '1') {
            oneCnt++;
        }
        if (str[i] == '4') {
            fourCnt++;
        }
        if (str[i] == '5') {
            fiveCnt++;
        }
    }

    for (int i = 0; i < m; i++) {
        int left, right;
        string sbs;

        cin >> left >> right >> sbs;
        --left;
        
        // for (int i = left - 1, idx = 0; i < right; i++, idx++) {
        //     str[i] = sbs[idx];
        // }
        int idx = 0;
        for (int i = 0; i < sbs.size(); i++) {
            if (str[left + i] == '1') oneCnt--;
            if (str[left + i] == '4') fourCnt--;
            if (str[left + i] == '5') fiveCnt--;
            str[left + i] = sbs[i];
            if (sbs[i] == '1') oneCnt++;
            if (sbs[i] == '4') fourCnt++;
            if (sbs[i] == '5') fiveCnt++;
        }
        long long a, b, c;
        a = oneCnt % 99824353;
        b = (oneCnt + fourCnt * 4 + fiveCnt * 5) % 99824353;
        c = (pow4[fourCnt] * pow5[fiveCnt]);
        c %= 99824353;
        cout << a << " " << b << " " << c << endl;
    }

    return 0;
}
