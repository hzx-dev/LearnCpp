#include <iostream>

using namespace std;

int deletedBlocks[50][50][50] = {0};

int main(){

    int w, x, h, count = 0;

    cin >> w >> x >> h;

    int q;

    cin >> q;

    int deleteBlock[q][6];

    for (int i=0; i < q; i++) {
        cin >> deleteBlock[i][0] >> 
               deleteBlock[i][1] >> 
               deleteBlock[i][2] >>
               deleteBlock[i][3] >>
               deleteBlock[i][4] >>
               deleteBlock[i][5];
    }

    for (int z=0; z < q; z++) 
        for (int i=deleteBlock[z][0]; i <= deleteBlock[z][3]; i++)
            for (int j=deleteBlock[z][1]; j <= deleteBlock[z][4]; j++)
                for (int k=deleteBlock[z][2]; k <= deleteBlock[z][5]; k++)
                    if (deletedBlocks[i][j][k] == 0) {
                        deletedBlocks[i][j][k] = 1;
                        count++;
                    }

    cout << w * x * h - count << endl;

    return 0;
}