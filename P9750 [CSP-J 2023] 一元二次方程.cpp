#include <iostream>
#include <cmath>
#include <limits>

using namespace std;

int gcd(int a, int b) {
    if (b == 0) return a;
    else return gcd(b, a % b);
}

bool youlishu(double v, int & p, int & q) {
    double eps = numeric_limits<double>::epsilon();
    if (abs(v - int(v)) < eps || abs(v - double(int(v + 0.5))) < eps) {
        return true;
    }
    for (int q = 1; q < 10000; q++) {
        int p = int(v * q + 0.5);
        if (abs(v - double(p) / q) < eps) {
            int g = gcd(p, q);
            if (g > 1) {
                p /= g;
                q /= g;
            }
            return true;
        }
    }
    return false;
}

void outputYoulishu(double v) {
    int a, b;
    youlishu(v, a, b);
    if (b == 1) cout << a;
    else cout << a << '/' << b;
}

int get_ans(int a, int b, int c) {
    
    int delta = b * b - 4 * a * c;
    int p, q;

    if (delta < 0) {cout << "NO" << endl; return 0;}
    else {
        double x = max(((-b) + sqrt(delta) / 2) * a, ((-b) - sqrt(delta) / 2) * a);
        if (youlishu(x,p,q)) outputYoulishu(x);
        else {
            double q1 = -(b / (2 * a));
            double q2 = (1 / (2 * a));
            if (q2>0) if (youlishu(q1,p,q) && youlishu(q2,p,q)) {
                if (q1 != 0) {outputYoulishu(q1);cout<<'+';}
                double r = ((x - q1) / q2) * ((x - q1) / q2);
                if(q2==1)cout<<"sqrt("<<int(r)<<")";
                else if(int(q2) == q2)cout<<int(q2)<<"*sqrt("<<int(r)<<")";
                else if(int(1/q2) == 1/q2)cout<<"sqrt("<<int(r)<<")/"<<int(1/q2);
                else {int c,d;youlishu(q2,c,d);cout<<int(c)<<"*sqrt("<<int(r)<<")/"<<int(d);}
            }
        }
    }

    return 0;
}

int main()
{
    int t, m;
    cin >> t >> m;
    while (t--) {int a,b,c;cin>>a>>b>>c;get_ans(a,b,c);cout<<endl;}
    
    return 0;
}
