#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

struct Student {
    int id;
    int score;
};

Student score[5005];

int cmp(const Student& a, const Student& b) {
    if (a.score!= b.score) {
        return a.score > b.score;
    }
    return a.id < b.id;
}

int main()
{
    int n, m;

    cin >> n >> m;

    int f = floor(m * 1.5);

    for (int i = 0; i < n; i++) {
        Student s;
        cin >> s.id >> s.score;
        score[i] = s;
    }

    sort(score, score + n, cmp);

    int scoreLine = score[f - 1].score;

    int passed = 0;
    for (int i = 0; i < n; i++) {
        if (score[i].score >= scoreLine) {
            passed++;
        }
        else {
            break;
        }
    }
    
    cout << scoreLine << " " << passed << endl;

    for(int i = 0; i< passed;i++){
		cout << score[i].id << " " << score[i].score << endl;
	}


    return 0;
}
