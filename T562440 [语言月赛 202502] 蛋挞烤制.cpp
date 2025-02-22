#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double vegg, vmilk, vtart, v;
    double e, m, t;
    cin >> vegg >> vmilk >> vtart;
    cin >> e >> m >> t;

    v = vegg * e + vmilk * m;
    double t_cnt = ceil(v / vtart);

    cout << ceil(t_cnt / t);

    return 0;
}
