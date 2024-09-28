// Author: Kevin
// 这东西真的是我写的，除了注释都是我一行一行敲的。
// This is the solution of the problem P5461. 赦免战俘.

#include <iostream>
#include <vector>
#include <cmath>
#include <cstring>

using namespace std;

int c[1024][1024];

void pardon(int x,int y,int l);

int main()
{
    int n;

    cin >> n;

    int j = pow(2, n);

    memset(c, 0, sizeof(c));

    pardon(0, 0, j);

    for (int i = 0; i < j; i++) {
        for (int k = 0; k < j; k++) {
            cout << !c[i][k] << " ";
        }
        cout << endl;
    }
    
    return 0;
}

void pardon(int x,int y,int l){
    if(l == 1){
        return;    
    }
    
    for(int i = x;i <= x + l / 2 - 1;i++){
        for(int j = y;j <= y + l / 2 - 1;j++){
            c[i][j] = 1;
        }
    }
    
    pardon(x + l / 2, y, l / 2);
    pardon(x, y + l / 2, l / 2);
    pardon(x + l / 2, y + l / 2, l / 2);
}
