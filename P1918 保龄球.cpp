#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct d {
    int num;
    int pos;
};

int cmp(d a, d b) {
    return a.num < b.num;
}

int bs(vector<d> &v, int k) {
    int left = 0, right = v.size() - 1;
    while (left <= right) {
        int mid = (left + right) / 2;
        if (v[mid].num == k) {
            return v[mid].pos;
        }
        else if (v[mid].num < k) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }
    return 0;
}


int main()
{
    vector<d> v;

    int n; // 数
    cin >> n;

    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        v.push_back({num, i + 1});
    }

    sort(v.begin(), v.end(), cmp);

    int q; // 询问数
    cin >> q;

    for (int i = 0; i < q; i++) {
        int k;
        cin >> k;

        // 二分
        int index = bs(v, k);
        cout << index << endl;
    }
    
    return 0;
}
