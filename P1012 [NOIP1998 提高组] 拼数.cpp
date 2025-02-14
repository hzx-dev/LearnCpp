#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int cmp(string a, string b) {
    return (a + b) > (b + a);
}

int main()
{
    int n;
    cin >> n;

    vector<string> nums;
    for (int i = 0; i < n; i++) {
        string num;
        cin >> num;
        nums.push_back(num);
    }

    sort(nums.begin(), nums.end(), cmp);

    for (auto item : nums) {
        cout << item;
    }
    
    return 0;
}
