#include <iostream>

using namespace std;

int main()
{
    int max = -114514;

    for (int i = 0; i < 10; i++) {
        int t;
        cin >> t;
        if (t > max) {
            max = t;
        }
    }

    cout << "最大的数：" << max << endl;

    return 0;
}
