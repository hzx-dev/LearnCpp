#include <iostream>
#include <algorithm>

using namespace std;

int arr[1000005];

int n, k, ans = 0;


bool isPrime(int num) {
    if (num < 2) {
        return false;
    } else {
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                return false;
            }
        }
    }
    return true;
}

void dfs(int m, int sum, int x){
    if(m == k){
        if(isPrime(sum))
            ans++;
        return ;
    }
    for(int i = x; i < n; i++)
        dfs(m + 1, sum + arr[i], i + 1);
    return ;
}

int main()
{
    cin >> n >> k;

    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }

    // 从arr中枚举k个数

    sort(arr + 1, arr + n + 1); // 排序
    dfs(0, 0, 0);

    cout << ans << endl;
    
    return 0;
}
