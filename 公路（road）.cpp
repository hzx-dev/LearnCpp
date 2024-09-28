#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main()
{
    long long n, d;

    cin >> n >> d;
    
    vector<long long> a;
    vector<long long> b;

    for (long long i = 0; i < n - 1; i++) {
        long long tmp;

        cin >> tmp;
        a.push_back(tmp);
    }

    for (long long i = 0; i < n; i++) {
        long long tmp;
        cin >> tmp;
        b.push_back(tmp);
    }

    long long curStn = 0;
    long long rmb = 0;
    long long canGo = 0;

    while (curStn < n - 1) {
        long long nxtStn = curStn;
        long long curStnRmb = b[curStn];
        long long toNxtStnDis = 0;
        while (curStnRmb <= b[nxtStn] && nxtStn < n - 1) {
            toNxtStnDis += a[nxtStn];
            nxtStn++;
        }
        long long needToAdd = ceil(((double)toNxtStnDis - canGo) / (double)d);
        canGo += needToAdd * d;
        long long prcTn = needToAdd * curStnRmb;
        canGo -= toNxtStnDis;
        rmb += prcTn;
        curStn = nxtStn;
    }

    cout << rmb << endl;

    return 0;
}
