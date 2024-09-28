#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>

using namespace std;

char map[26][350];
int count_c[26];
int max_n = 0;

void ProcessDataInitMapAndOutput() {
    max_n = *max_element(count_c, count_c + 26);
    for (int i = max_n - 1; i >= 0; i--) {
        for (int j = 0; j < 26; j++) {
            if (i < count_c[j]) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }

    cout << "A B C D E F G H I J K L M N O P Q R S T U V W X Y Z" << endl;

    return;
}

// void output_map() {
//     for (int i = max_n; i >= 0; i--) {
//         for (int j = 0; j < 26; j++) {
//             cout << map[i][j] << " ";
//         }
//         cout << endl;
//     }

//     cout << "A B C D E F G H I J K L M N O P Q R S T U V W X Y Z" << endl;

//     return;
// }

int main()
{
    string a, b, c, d;
    string s;

    getline(cin, a);
    getline(cin, b);
    getline(cin, c);
    getline(cin, d);
    s = a + b + c + d;

    for (int i = 0; i < s.length(); i++) {
        if (isupper(s[i])) {
            // cout << s[i] << " " << count_c[s[i] - 'A'] << endl;
            count_c[s[i] - 'A']++;
        }
    }

    ProcessDataInitMapAndOutput();
    // output_map();

    return 0;
}
