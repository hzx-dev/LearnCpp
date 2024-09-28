#include <iostream>
#include <vector>

using namespace std;

vector<int> a;
vector<int> dp;

int n, t;

int main()
{
    cin >> n;

    for(int i = 0; i < n; i++) {   
        cin >> t;
        a.push_back(t);
    }

    for(int i = 0; i < n; i++) {
        if(dp.size() == 0 || a[i] > dp[dp.size()-1]) {
            dp.push_back(a[i]);
        }
        else {
            int idx = lower_bound(dp.begin(), dp.end(), a[i]) - dp.begin();
            dp[idx] = a[i];
        }
    }


    cout << dp.size() << endl;

    return 0;
}
