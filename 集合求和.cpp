#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    long long sum = 0, tmp, n = 0;
    char c;

    while ((cin >> tmp).get(c)){
        sum += tmp;
        // cout << "tmp = " << tmp << endl;
        // cout << "sum = " << sum << endl;
        n++;
        if (c == '\n' || c == EOF) {
            break;
        }
    }

    cout << sum * pow(2, n - 1);

    return 0;
}
