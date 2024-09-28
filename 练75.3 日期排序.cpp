#include <bits/stdc++.h>

using namespace std;

struct Date {
    int y, m, d;
};

Date nodes[100000];

int cmp(Date a, Date b) {
    if (a.y != b.y) return a.y < b.y;
    else if (a.m != b.m) return a.m < b.m;
    else return a.d < b.d;
}

int main()
{
    int n;

    cin >> n;

    for (int i = 0; i < n; i++) {
        string a;
        cin >> a;
        int y, m, d;
        d = stoi(a.substr(0, a.find("/")));
        a.erase(0, a.find("/") + 1);
        m = stoi(a.substr(0, a.find("/")));
        a.erase(0, a.find("/") + 1);
        y = stoi(a);
        nodes[i].y = y;
        nodes[i].m = m;
        nodes[i].d = d;
    }

    // for (int i = 0; i < n; i++) {
    //     cout << nodes[i].y << " " << nodes[i].m << " " << nodes[i].d << endl;
    // }

    sort(nodes, nodes + n, cmp);

    for (int i = 0; i < n; i++) {
        printf("%02d/%02d/%04d\n", nodes[i].d, nodes[i].m, nodes[i].y);
    }
    
    return 0;
}
