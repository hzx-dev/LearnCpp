#include <iostream>

using namespace std;

int apples[1005];

int main()
{
    int tmp;

    for (int i = 0; i < 10; i++) {
        cin >> apples[i];
    }    

    int h;

    cin >> h;

    int cnt = 0;

    for (int j = 0; j < 10; j++) {
        if (apples[j] <= h + 30) {
            cnt++;
        }
    }
    
    cout << cnt << endl;

    return 0;
}
