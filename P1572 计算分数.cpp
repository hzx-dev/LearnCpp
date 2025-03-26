#include <iostream>
#define pii pair<long long, long long>
#define mp make_pair

using namespace std;

char op;

long long gcd(long long a, long long b) {
    return (b == 0) ? a : gcd(b, a % b);
}

pii frac_reduce(pii a) {
    // 约分
    long long g = gcd(a.first, a.second);
    return mp(a.first / g, a.second / g);
}

pii frac_plus(pii a, pii b) {
    /*
        分数加法
    */
    long long x = b.second * a.first + a.second * b.first;
    long long y = b.second * a.second;
    return frac_reduce(mp(x, y)); // 直接约分
}

pii frac_sub(pii a, pii b)  {
    long long x = b.second * a.first - a.second * b.first;
    long long y = b.second * a.second;
    return frac_reduce(mp(x, y)); // 直接约分
}

pii build_frac(long long a, long long b) {
    return mp(a, b);
}

void print_frac(pii a) {
    if (a.second < 0) {
        cout << -a.first << '/' << -a.second << endl;
    } else if (a.second == 1) {
        // 是整数
        cout << a.first << endl;
        return ;
    } else cout << a.first << '/' << a.second << endl;
}

int main()
{
    long long a, b;
    pair<long long, long long> result;
    char c;

    cin >> a >> c >> b;
    result = frac_reduce(build_frac(a, b));

    while (cin >> op >> a >> c >> b) {
        pii tmp = frac_reduce(build_frac(a, b));
        if (op == '+') {
            result = frac_plus(result, tmp);
        } else {
            // 减法
            result = frac_sub(result, tmp);
        }
    }

    print_frac(result);
    
    return 0;
}
