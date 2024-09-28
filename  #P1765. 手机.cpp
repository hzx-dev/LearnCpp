#include <iostream>
#include <string>

using namespace std;

const string press[8] = {"abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

int main() 
{      
    int count = 0;
    char ch;
    string str;
    getline(cin, str);

    for (int i = 0; i < str.length(); i++) {
        ch = str[i];
        if (ch == ' ') {
            count++;
            continue;
        }
        for (int j = 0; j < 8; j++) {
            if (press[j].find(ch) != string::npos) {
                count += press[j].find(ch) + 1;
            }
        }
    }

    cout << count << endl;
    
    return 0;
}
