#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

vector<int> c;

bool great_answer(int a) {
    if (a <= 1) return false;
    if (a % 2 != 0) return false;
    if (a & a - 1 == 0) {
        c.push_back(a);
        return true;
    }

    int tmp = 1, result = 0;
    for (int i = 0; i < a; i++) {
        if (tmp * 2 > a) {
            result = i - 1;
            c.push_back(tmp);
            return great_answer(a - tmp);
        }
        tmp *= 2;
    }
}

int main()
{
    // the great split
    int n;
    cin >> n;
    great_answer(n);
    if (c.empty()) {
        cout << -1 << endl;
    } else
    for (int i = 0; i < c.size(); i++) {
        cout << c[i] << " ";
    }
    
    return 0;
}
