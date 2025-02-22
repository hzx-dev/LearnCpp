#include <iostream>
#include <string>
#include <cstdio>
#include <map>

using namespace std;

string ip[10], tmp; char t;
map<char, string> m = {
    {'0', "0000"},
    {'1', "0001"},
    {'2', "0010"},
    {'3', "0011"},
    {'4', "0100"},
    {'5', "0101"},
    {'6', "0110"},
    {'7', "0111"},
    {'8', "1000"},
    {'9', "1001"},
    {'A', "1010"},
    {'B', "1011"},
    {'C', "1100"},
    {'D', "1101"},
    {'E', "1110"},
    {'F', "1111"}
};

string hex_to_bin(string s) {
    int weight = 1;
    string bin;

    for (int i = 0; i <= s.size() - 1; i++) {
        bin += m[s[i]];
    }

    return bin;
}

int main()
{   
    int i = 1;
    while (cin >> t) {
        if (t == ':') i++;
        else ip[i] += t;
    }

    for (int i = 1; i <= 8; i++) {
        cout << "ggg" << ip[i] << endl;
        cout << hex_to_bin(ip[i]) << endl;
    }
    
    return 0;
}
