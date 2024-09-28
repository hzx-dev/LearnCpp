#include <iostream>
#include <iomanip>
#include <ios>

using namespace std;

int main() {
    int n, m=1;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-i; j++)
        {
            cout << fixed << setw(2) << setfill('0') << m;
            m++;
        }
        cout << endl;
    }
        
    return 0;    
}