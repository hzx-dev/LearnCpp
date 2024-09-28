#include <iostream>
#include <vector>

using namespace std;

const bool subway = 0; // 0 for subway, 1 for bus
const bool bus = 1;
vector<pair<int, int>> tickets;

int main()
{
    int n, cost = 0;
    cin >> n;

    while (n--) {
        int way, price, time;
        cin >> way >> price >> time;

        // two choices: subway or bus
        if (way == subway) {
            // subway has no sales ticket
            cost += price;
            tickets.push_back({price, time});
        } else if (way == bus) { // bus has sales ticket
            // 寻找可用的车票
            bool found = false;
            for (int i = 0; i < tickets.size(); i++) {
                int t = tickets[i].second; // time
                int p = tickets[i].first; // price
                if (time - t <= 45 && p >= price) {
                    // 为超过时效及价格低于地铁
                    // 从优惠票序列中删除该票
                    tickets.erase(tickets.begin() + i, tickets.begin() + i + 1);
                    found = true;
                    break; // free for bus
                }
            }
            if (not found) {
                // 全价票
                cost += price;
            }
        }
    }

    cout << cost << endl;
    
    return 0;
}
