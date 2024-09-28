#include <iostream>

using namespace std;

int main()
{
    int n, id;

    string max = "";
    string in;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> in;
        if (in.length() > max.length() || (in.length() >= max.length() && in > max)) {
            max = in;
            id = i + 1;
        }
    }

    cout << id << endl << max << endl;
    
    return 0;
}
