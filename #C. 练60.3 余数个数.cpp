#include <iostream>
#include <map>

using namespace std;

map<int, int> mp;

int main()
{   
    for (int i = 0; i < 10; i++) {
        int tmp;
        cin >> tmp;
        mp[tmp % 42]++;
    }

    cout << mp.size() << endl;
    
    return 0;
}
