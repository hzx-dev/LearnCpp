#include <iostream>
#include <queue>

using namespace std;

struct fraction {
    bool is_negative;
    int mother;
    int child;
};

queue<fraction> frac;
queue<char> calc;

int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}


int main()
{
    string strss;

    cin >> strss;

    fraction tmpFrac, emptyFrac;
    bool has_frac_line = false;

    for (auto a : strss) {
        if (a == '-') {
            if (calc.empty()) {
                cout << "标记一个负号！" << endl;
                tmpFrac.is_negative = true;
            }
            else {
                fraction ne = tmpFrac;
                tmpFrac = emptyFrac;
                frac.push(ne);
                calc.push(a);
                has_frac_line = false;
                cout << "一个新的分数！" << ne.mother << "/" << ne.child << endl;
            }
        }
        else if (a == '+') {
            // 压入栈顶
            calc.push(a);
            fraction ne = tmpFrac;
            frac.push(ne);
            tmpFrac = emptyFrac;
            has_frac_line = false;
            cout << "一个新的分数！" << ne.mother << "/" << ne.child << endl;
        }
        else if (isdigit(a)) {
            if (has_frac_line) {
                tmpFrac.child = a - '0';
            }
            else tmpFrac.mother = a - '0';
        }
        else if (a == '/') has_frac_line = true;
    }
    frac.push(tmpFrac);
    cout << "最后一个分数！" << tmpFrac.mother << "/" << tmpFrac.child << endl;

    for (int i = 0; i < calc.size(); i++) {
        fraction a = frac.front();
        frac.pop();
        fraction b = frac.front();
        char op = calc.front();
        calc.pop();
        if (op == '+') {
            // 分数是否可以约分
            int aScd = gcd(a.child, a.mother);
            a.child /= aScd;
            a.mother /= aScd;
            int bScd = gcd(b.child, b.mother);
            b.child /= bScd;
            b.mother /= bScd;
            fraction res;
            res.mother = a.mother * b.mother;
            res.child = a.child * b.mother + a.mother * b.child;
            res.is_negative = a.is_negative ^ b.is_negative;
            frac.push(res);
            cout << a.child << "/" << a.mother << "+" << b.child << "/" << b.mother << "=" << res.mother << "/" << res.child << endl;
        }
        else if (op == '-') {
            // 分数是否可以约分
            int aScd = gcd(a.child, a.mother);
            a.child /= aScd;
            a.mother /= aScd;
            int bScd = gcd(b.child, b.mother);
            b.child /= bScd;
            b.mother /= bScd;
            fraction res;
            res.mother = a.mother * b.mother;
            res.child = a.child * b.mother - a.mother * b.child;
            res.is_negative = a.is_negative ^ b.is_negative;
            frac.push(res);
            cout << "结果：" << res.mother << "/" << res.child << endl;
        }
    }

    return 0;
}
