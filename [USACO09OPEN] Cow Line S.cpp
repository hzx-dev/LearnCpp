#include <iostream>
#include <vector>

using namespace std;

vector<int> cow;

void printCow() {
    for (int i : cow) cout << i << endl;
}

int main()
{
    int s, idx = 1;

    cin >> s;
    
    for (int i = 1; i <= s; i++) {
        char op;
        cin >> op;
        if (op == 'A') {
            cin >> op;
            if (op == 'L') {    // 从左边加入
                cow.insert(cow.begin(), idx);
            }
            else {  // 从右边加入
                cow.push_back(idx);
            }
            idx++;
        }
        else {
            // 离开
            cin >> op;
            if (op == 'L') {
                // 从左边离开k只奶牛 
                int k;

                cin >> k;

                for (int j = 0; j < k; j++) {
                    cow.erase(cow.begin());
                }
            }
            else {
                // 从右边离开k只奶牛
                int k;

                cin >> k;

                for (int j = 0; j < k; j++) {
                    cow.pop_back();
                }
            }
        }
        // printCow();
    }

    // 输出cow
    printCow();

    return 0;
}
