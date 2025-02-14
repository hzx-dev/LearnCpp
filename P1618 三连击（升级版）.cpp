#include <iostream>
#include <algorithm>

using namespace std;

int s[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

int main()
{
    int a, b, c;

    cin >> a >> b >> c;

    int flag = 1;

    do {
        int s1 = 100 * s[0] + s[1] * 10 + s[2];
        int s2 = 100 * s[3] + s[4] * 10 + s[5];
        int s3 = 100 * s[6] + s[7] * 10 + s[8];
        // A : B : C
        if (s1 * b == s2 * a && s2 * c == s3 * b) {
            cout << s1 << " " << s2 << " " << s3 << endl;
            flag = 0;
        }
    } while (next_permutation(s, s + 9));

    if (flag) {
        cout << "No!!!" << endl;
    }
    
    return 0;
}
