#include <iostream>
#include <algorithm>

using namespace std;

int arr[100005];

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) cin >> arr[i];

    sort(arr, arr + n);

    int m;
    cin >> m;

    for (int i = 0; i < m; i++) {
        int v;

        cin >> v;

        auto p = lower_bound(arr, arr + n, v);

        if (p == arr + n) {cout << arr[n - 1] << endl;continue;}

        if (p == arr + i) cout << *p;
        else if (
            arr[i] - *(p - 1) <
            *(p + 1) - arr[i]
        ) cout << arr[i - 1] << endl;
        else cout << arr[i + 1] << endl;
    }
    
    return 0;
}
