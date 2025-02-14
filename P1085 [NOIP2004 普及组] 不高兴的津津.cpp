#include <iostream>

using namespace std;

int main()
{
    int day = 0;
    int d = 0; // 记录最大的

    int a, b;

    for (int i = 1; i <= 7; i++) {
        cin >> a >> b;

        if (a + b > 8 && a + b > d) {
            d = a + b;
            day = i;
        }
    }
    
    cout << day << endl;
    
    return 0;
}
