#include <iostream>

using namespace std;

int n, f;
long long s[10005], d[10005];

int main() {
    cin >> n;
    // 必须按顺序
    long long day = 0, cur = 1;

    for (int i = 1; i <= n; i++) {
        cin >> s[i] >> d[i];
        if (day < s[i]) {
			day = s[i];
		}
		else if ((day - s[i]) % (d[i]+1) == 0){
			day += d[i] + 1;
			continue;
		} else
		    day = s[i] + ((day - s[i]) / (d[i] + 1) + 1) * (d[i] + 1);
    }


    cout << day;

    return 0;
}
