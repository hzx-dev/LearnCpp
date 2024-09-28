#include <iostream>
#include <cmath>

using namespace std;

struct achievement{
    int Chinese;
    int Maths;
    int English;
};

int main(){

    int n, Chinese, English, Maths, count=0;

    cin >> n;

    achievement achievements[n];

    for (int i=0; i < n; i++) {
        cin >> Chinese >> Maths >> English;

        achievement tmp = {
            Chinese, 
            Maths, 
            English
            };
        
        achievements[i] = tmp;
    }

    for (int i=0; i < n; i++) {
        achievement tmp = achievements[i];
        for (int y=i+1; y<n; y++) {
            achievement current = achievements[y];
            if ((abs(tmp.Chinese - current.Chinese) <= 5 &&
                 abs(tmp.Maths - current.Maths) <= 5 &&
                 abs(tmp.English - current.English) <= 5) &&
                 (abs((tmp.Chinese + tmp.Maths + tmp.English) -
                 (current.Chinese + current.Maths + current.English)) <= 10)) {
                    count++;
            }
        }
    }

    cout << count;

    return 0;
}