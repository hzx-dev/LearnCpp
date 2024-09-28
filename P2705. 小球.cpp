#include <iostream>

using namespace std;

int main()
{
    int R, B, C, D, E;

    cin >> R >> B >> C >> D >> E;

    // 如果把一个红色小球放在一个红色盒子里，那么得分是 C。
    // 如果把一个蓝色小球放在一个蓝色盒子里，那么得分是 D。
    // 如果把一个红色小球放在一个蓝色盒子里，那么得分是 E。
    // 如果把一个蓝色小球放在一个红色盒子里，那么得分是 E。

    if (D + C >= E * 2) {
        cout << R * C + B * D; 
        // 蓝色盒子的数量大于红色盒子的数量，则蓝色小球可以放在红色盒子里。
    }
    else {
        if(R > B) {
            cout << (R - B) * C + 2 * B * E;
        }
        else {
            cout << (B - R) * D + 2 * R * E; 
        }
    }
    
    return 0;
}
