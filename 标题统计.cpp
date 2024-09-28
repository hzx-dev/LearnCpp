#include <iostream>
#include <cctype>

using namespace std;

int main() {
    string title;
    getline(cin, title);
    int count = 0;
    for (int i = 0; i < title.length(); i++) {
        if (!isspace(title[i]) && title[i] != '\n') {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}