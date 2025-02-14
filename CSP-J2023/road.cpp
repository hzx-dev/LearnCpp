#include <iostream>
#include <cmath>

using namespace std;

int dist[100005];
int price[100005];

int main() {
    
//    freopen("road.in", "r", stdin);
//    freopen("road.out", "w", stdout);
    
    int n, d;
    
    cin >> n >> d;
    
    for (int i = 1; i <= n - 1; i++) {
        cin >> dist[i];
    }
    
    for (int i = 1; i <= n; i++) {
        cin >> price[i];
    }
    
    double left = 0, ans = 0;
    
    for (int i = 1; i < n; i++) {
        int current_price = price[i];
        int j = i + 1;
        double dn = dist[j - 1];
        while (price[j] > current_price && j <= n) {
            dn += dist[j];
            j++;
        } // 找到价格比当前低的加油站
        int needDist = dn - left;
        int needAdd = ceil((double)needDist / d);
        
        ans += needAdd * current_price;
        left += needAdd;
        left -= (dn / d); // 花费
    }
    
    cout << ans;
    
    return 0;
}

