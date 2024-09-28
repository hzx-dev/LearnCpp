#include <iostream>
#include <string>

using namespace std;

struct stu {
    int id;
    int score;
    int exta_score;
    int composite_score;
    int scoreAndExtaScoreTotal() {return score + exta_score;}
};

string excellent(stu s) {
    if (s.scoreAndExtaScoreTotal() > 140 && s.composite_score >= 800) {
        return "Excellent";
    } else return "Not Excellent";
}

int main()
{
    stu student;

    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> student.id >> student.score >> student.exta_score;
        student.composite_score = student.score * 7 + student.exta_score * 3;
        cout << excellent(student) << endl;
    }
    
    return 0;
}
