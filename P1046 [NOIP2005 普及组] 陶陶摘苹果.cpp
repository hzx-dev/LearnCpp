#include <iostream>

using namespace std;

int a[15];

int main()
{
    for (int i = 0; i < 10; i++)
        cin >> a[i];
    
    int h, cnt = 0;
    cin >> h;

    for (int i = 0; i < 10; i++) {
        if (a[i] <= h + 30) cnt++;
    }
    
    cout << cnt << endl;

    return 0;
}
