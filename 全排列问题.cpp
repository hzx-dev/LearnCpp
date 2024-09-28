// @Author  : Kevin

#include <iomanip>
#include <iostream>
#include <algorithm>

using namespace std;

int table[10] {1, 2, 3, 4, 5, 6, 7, 8, 9};

int main(){

    int n;

    cin >> n;

    for (int i = 0; i < n; i++) {
            cout.setf(ios::left);
            cout << setw(4) << table[i];
    }

    cout << endl;

    while (next_permutation(table, table + n) != 0) {
        // cout << n << "Q ";
        for (int i = 0; i < n; i++) {
            cout.setf(ios::left);
            cout << setw(4) << table[i];
        }
        cout << endl;
    } 

    return 0;
}