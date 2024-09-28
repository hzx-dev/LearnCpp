#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> arr;

int main()
{
    int n;

    cin >> n;

    for (int i = 0; i < n; i++) {
        int tmp;

        cin >> tmp;

        if (count(arr.begin(), arr.end(), tmp) == 0) {
            arr.push_back(tmp);
        }
    }

    sort(arr.begin(), arr.end());

    cout << arr.size() << endl;

    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    
    return 0;
}
