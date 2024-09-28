#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    int CurrentNumberList[7] = {0, 0, 0, 0, 0, 0, 0};
    int winning[7] = {0, 0, 0, 0, 0, 0, 0};

    for (int i = 0; i < 7; i++) {
        cin >> CurrentNumberList[i];
    }

    int XmBuyList[n][7] = {0}; 

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 7; j++) {
            cin >> XmBuyList[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        int sameCount = 0;
        for (int j = 0; j < 7; j++) {
            if (find(CurrentNumberList, CurrentNumberList + 7, XmBuyList[i][j]) != CurrentNumberList + 7) {
                sameCount++;
            }
        }
        winning[(7 - sameCount)]++;
    }

    // Output wining result 
    for (int i = 0; i < 7; i++) {
        cout << winning[i] << " ";
    }

    return 0;

}

