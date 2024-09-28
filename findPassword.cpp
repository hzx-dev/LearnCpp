#include <iostream>

using namespace std;

int main()
{
    int moveNum;
    cin >> moveNum;
    string movedPassword;
    cin >> movedPassword;

    for (int i = 0; i < movedPassword.length(); i++){
        movedPassword[i] = ((movedPassword[i] + moveNum) - 97) % 26 + 97;
    }
    cout << movedPassword << endl;

    return 0;
}
