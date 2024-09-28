#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

struct Student {
    int id;
    int c;
    int m;
    int e;
};

Student students[100005];

bool cmp(Student a, Student b) {
    // 比较按总分从高到低排序，如果两个同学总分相同，
    // 再按语文成绩从高到低排序，如果两个同学总分和语文成绩都相同，
    // 那么规定学号小的同学 排在前面

    if (a.c + a.m + a.e!= b.c + b.m + b.e) {
        return a.c + a.m + a.e > b.c + b.m + b.e;
    } else if (a.c!= b.c) {
        return a.c > b.c;
    } else {
        return a.id < b.id;
    }
}

int main()
{
    int n;

    cin >> n;

    for (int i = 1; i <= n; i++) {
        int c, m, e;
        cin >> c >> m >> e;
        Student s {i, c, m, e};
        students[i] = s;
    }

    sort(students, students + n + 1, cmp);

    for (int i = 0; i < 5; i++) { 
        cout << students[i].id << " " << 
            students[i].c + students[i].m + students[i].e << endl;
    }
    
    return 0;
}
