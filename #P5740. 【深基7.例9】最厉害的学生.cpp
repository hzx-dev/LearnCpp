// Author: Kevin
// 这东西真的是我写的，除了注释都是我一行一行敲的。
// This is the solution of the problem 4 of the P5738.

#include <iostream>
#include <string>

using namespace std;

struct Student {
    string name;
    int Chinese;
    int Math;
    int English;
    int total;
};

int main()
{   
    int n;

    cin >> n;

    Student students[n];
    int NBID = 0, NBestScore = 0;

    for (int i = 0; i < n; i++) {
        cin >> students[i].name >> students[i].Chinese >> students[i].Math >> students[i].English;
        students[i].total = students[i].Chinese + students[i].Math + students[i].English;
        if (students[i].total > NBestScore) {
            NBestScore = students[i].total;
            NBID = i;
        }
    }

    

    cout << students[NBID].name << " " << students[NBID].Chinese << " " << students[NBID].Math 
            << " " << students[NBID].English << endl;
    
    return 0;
}

