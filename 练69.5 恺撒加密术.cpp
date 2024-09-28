#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str;
    getline(cin, str);
    
    for (int i = 0; i < str.length(); i++)
    {   
        if (str[i] == 'z') {
            str[i] = 'a';
            continue;
        } else if (str[i] == 'Z') {
            str[i] = 'A';
            continue;
        }
        if (isalpha(str[i])) {
            str[i] += 1;
        }
    }
    
    cout << str << endl;
    
    return 0;
}
