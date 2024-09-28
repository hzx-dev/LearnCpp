#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> a;

bool is_arithmetic_progression(vector<int> & a) {
    int diff = a[1] - a[0];
    for (int i = 2; i < a.size(); i++) {
        if (a[i] - a[i-1]!= diff) {
            return false;
        }
    }
    return true;
}

int main()
{
    for (int i = 0; i < 3; i++) {
        int tmp;
        cin >> tmp;
        a.push_back(tmp);
    }
    
    sort(a.begin(), a.end());

    // Jisuanshifouyougongcha

    
    if (is_arithmetic_progression(a)) {
        cout << a[2] + (a[1] - a[0]);
    }
    else {
        vector<int> b = a;
        b.insert(b.begin(), a[0] + (a[2] - a[1]));
        if (is_arithmetic_progression(b)) {
            cout << b[2] + (b[1] - b[0]);
        }
        else {
            cout << a[2] - (a[1] - a[0]);
        }
    }

    return 0;
}
