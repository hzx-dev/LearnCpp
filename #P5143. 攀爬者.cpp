#include <iostream>
#include <algorithm>
#include <cmath>
#include <iomanip>

using namespace std;

struct Position {
    int x;
    int y;
    int z;
};

Position pos[500005];

int cmp(Position a, Position b) {
    return a.z < b.z;
}

int main()
{
    int n;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> pos[i].x >> pos[i].y >> pos[i].z;
    }

    sort(pos, pos + n, cmp);

    double total_distance = 0;

    for (int x = 1; x < n; x++) { 
        Position i = pos[x - 1];
        Position j = pos[x];
        total_distance += sqrt(pow(i.x - j.x, 2) + pow(i.y - j.y, 2) + pow(i.z - j.z, 2));
    }

    cout << fixed << setprecision(3) << total_distance << endl;
    
    return 0;
}
