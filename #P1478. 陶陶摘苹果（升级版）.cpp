#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

vector<vector<int>> apples;

int cmp(vector<int> a, vector<int> b) { 
    return a[1] < b[1];
}

int main()
{
    
    int n, s, a, b;

    cin >> n >> s >> a >> b;
    
    for (int i = 0; i < n; i++) {
        int x, y;

        cin >> x >> y;

        if (x > a + b) continue;

        apples.push_back({x, y});
    }

    sort(apples.begin(), apples.end(), cmp);
    
    // FILL THE NUMS

    int count = 0;
    for (int i = 0; i < n; i++) {
        if (s - apples[i][1] < 0) break;
        else {
            count++;
            s -= apples[i][1];
        }
    }

    cout << count << endl;

    return 0;
}
