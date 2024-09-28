// This is the code of the problem "Your Ride Is Here" in the USACO 2011 Round 1.

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string hx, dw;

    cin >> hx >> dw;

    int hxCount = 1;
    int dwCount = 1;

    for (int i = 0; i < hx.length(); i++)
    {
        hxCount *= hx[i] - 'A' + 1;
    }

    for (int i = 0; i < dw.length(); i++)
    {
        dwCount *= dw[i] - 'A' + 1;
    }

    // cout << hxCount << " " << dwCount << endl;

    if (hxCount % 47 == dwCount % 47) {
        cout << "GO" << endl;
        return 0;
    }
    cout << "STAY" << endl;
    
    return 0;
}

