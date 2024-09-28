#include <iostream>
#include <climits>

using namespace std;

int main()
{
    int n, m, min_sum = INT_MAX;

    cin >> n >> m;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    for (int i = 0; i < n - m + 1; i++) {
        int sum = 0;
        for (int j = i; j < i + m; j++) {sum += arr[j];}
        if (sum < min_sum) min_sum = sum;
    }

    cout << min_sum << endl;

    return 0;
}
