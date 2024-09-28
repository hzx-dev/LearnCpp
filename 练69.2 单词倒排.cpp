#include <iostream>

using namespace std;

string word[100];

int main()
{
    string a;
    string tmp;
    int f = 0;
    
    getline(cin, a);

    for (int i = 0; i < a.size(); i++) {
        if (a[i] == ' ') {
            word[f++] = tmp;
            tmp = "";
        } else 
            tmp += a[i];
    }

    word[f++] = tmp;

    for (int j = f - 1; j >= 0; j--) {
        cout << word[j] << " ";
    }
    
    return 0;
}
