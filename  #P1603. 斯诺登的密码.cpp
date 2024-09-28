#include <string>
#include <iostream>
#include <cstring>
#include <map>
#include <algorithm>

using namespace std;

string s[7] = {""};
map<string, int>  num = {
    {"one", 1},
    {"two", 2},
    {"three", 3},
    {"four", 4},
    {"five", 5},
    {"six", 6},
    {"seven", 7},
    {"eight", 8},
    {"nine", 9},
    {"ten", 10},
    {"eleven", 11},
    {"twelve", 12},
    {"thirteen", 13},
    {"fourteen", 14},
    {"fifteen", 15},
    {"sixteen", 16},
    {"seventeen", 17},
    {"eighteen", 18},
    {"nineteen", 19},
    {"twenty", 20},
    {"a", 1}, 
    {"both", 2},
    {"another", 1},
    {"first", 1},
    {"second", 2},
    {"third", 3},
};


int nums[999] = {0};

int main() {
    int count = 0;
    int index = 0;
    string s;

    for (int i = 0; i < 6; i++) {
        cin >> s;
        if (num[s])
            nums[index++] = num[s];
        // cout << num[s] << " " << nums[index - 1] << endl;
    }
            

    if (index == 0) {
        cout << "0";
        return 0;
    }
    else {
        // Process numbers
        for (int i = 0; i < index; i++) {
            nums[i] = nums[i] * nums[i] % 100;
        }
        // for (int i = 0; i < index; i++) {
            // cout << nums[i] << " ";
        // }
        sort(nums, nums + index); // Sort the numbers
        cout << nums[0];
        for(int i = 1; i < index; i++)
		{
			if (nums[i] < 10) cout << 0;
			cout << nums[i];
		}
    }

    return 0;
}
