#include <iostream>
#include <map>
#include <algorithm>

using namespace std;

map<int, int> changeMoney(int money) {
    map<int, int> result;
    int coins[5] = {100, 50, 20, 5, 1};

    // Change 100
    result[100] = money / 100;
    money %= 100;

    // Change 50

    result[50] = money / 50;
    money %= 50;

    // Change 20

    result[20] = money / 20;
    money %= 20;

    // Change 5

    result[5] = money / 5;
    money %= 5;

    // Change 1

    result[1] = money % 5;

    return result;

}

int main()
{
    int n;

    cin >> n;

    map<int, int> result = changeMoney(n);

    for (auto i : result) {
        cout << i.first << " " << i.second << endl;
    }
    
    return 0;
}
