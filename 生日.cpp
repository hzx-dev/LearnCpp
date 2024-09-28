#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

struct stu {
    string name;
    int id, y, m, d;
};

bool cmp(stu a, stu b) {
    if (a.y == b.y)
        if (a.m == b.m)
            if (a.d == b.d)
                return a.id > b.id;
            else
                return a.d < b.d;
        else
            return a.m < b.m;
    else
        return a.y < b.y;
}

stu students[100005];

int main()
{
    int n;

    cin >> n;

    for (int i = 0; i < n; i++) {
        students[i].id = i;
        cin >> students[i].name >> 
            students[i].y >> 
            students[i].m >> 
            students[i].d;
    }

    sort(students, students + n, cmp);

    for (int i=0; i<n; ++i) {        
        cout << students[i].name << endl;
    }

    return 0;

}
