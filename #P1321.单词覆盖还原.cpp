// Author: Kevin
// Time: 2021-08-10
// Description: 单词覆盖还原

#include <iostream>

using namespace std;

int main()
{
    string s;
    int boy = 0, girl = 0;

    getline(cin, s);

    int n = s.length();

    for (int i = 0; i < n;i++) {
        if (s[i] == '.') {
            continue;
        }
        else if (s[i] == 'b' or s[i] == 'o' or s[i] == 'y') {
            if (s[i] == 'b') {
                boy++; // 遇到b，boy++
                if (s[i + 1] == 'o') { // 遇到o，boy++
                    i++;
                    if (s[i + 1] == 'y') { // 遇到y，boy++
                        i++;
                    }
                    continue;
                }
            }
            else if (s[i] == 'o') {
                boy++; // 遇到o，boy++
                if (s[i + 1] == 'y') { // y没被覆盖
                    i++;
                    continue; // 跳过y
                }
            }
            else if (s[i] == 'y') {
                boy++; // 遇到y，boy++
            }
        }
        else if (s[i] == 'g' or s[i] == 'i' or s[i] == 'r' or s[i] == 'l') {
            if (s[i] == 'g') {
                girl++; // 遇到g，girl++
                if (s[i + 1] == 'i') { // 遇到i，girl++
                    i++;
                    if (s[i + 1] == 'r') { // 遇到r，girl++
                        i++;
                        if (s[i + 1] == 'l') { // 遇到l，girl++
                            i++;
                        }
                    }
                    continue;
                }
            }
            else if (s[i] == 'i') {
                girl++; // 遇到r，girl++
                if (s[i + 1] == 'r') { // i没被覆盖
                    i++;
                    if (s[i + 1] == 'l') { // 遇到l，girl++
                        i++;
                    }
                    continue;
                }
            }
            else if (s[i] == 'r') {
                girl++; // 遇到i，girl++
                if (s[i + 1] == 'l') { // l没被覆盖
                    i++;
                    continue; // 跳过l
                }
            }
            else if (s[i] == 'l') {
                girl++; // 遇到l，girl++
            }
        }
    }

    cout << boy << endl << girl << endl;
    
    return 0;
}

