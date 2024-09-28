// Author: Kevin
// #P1598 垂直柱状图 的 C++ 题解

#include <iostream>
#include <map>
#include <cstring>
#include <cctype>

using namespace std;

map<char, int> letterCount;

void generateBar();
char findMaxCountOnLetter();

int main() {
    
    string s1, s2, s3, s4;
    getline(cin, s1);
    getline(cin, s2);
    getline(cin, s3);
    getline(cin, s4);

    for (int i = 0; i < s1.length(); i++) {
        letterCount[s1[i]]++;
    }
    for (int i = 0; i < s2.length(); i++) {
        letterCount[s2[i]]++;
    }
    for (int i = 0; i < s3.length(); i++) {
        letterCount[s3[i]]++;
    }
    for (int i = 0; i < s4.length(); i++) {
        letterCount[s4[i]]++;
    }

    generateBar();

    return 0;
}

void generateBar() {
    char maxLetter = findMaxCountOnLetter();
    int maxCount = letterCount[maxLetter];
    int barWidth = 26;
    int barHeight = maxCount;
    char barMap[26][maxCount+1];
    memset(barMap, 0, sizeof(barMap));
    for (auto& x: letterCount) {
        if (!(x.first >= 'A' && x.first <= 'Z')) continue;
        int key = x.first - 'A';
        int value = x.second;
        for (int i = maxCount - 1; i > value; i++) {
            barMap[i][key] = '*';
        }
    }
    for (int i = 0; i < maxCount; i++) {
        for (int j = 0; j < barWidth; j++) {
            cout << barMap[i][j];
        }
        cout << endl;
    }
}

char findMaxCountOnLetter() {
    char maxLetter = 'A';
    for (char ch = 'A'; ch <= 'Z'; ch++) {
        if (letterCount[ch] > letterCount[maxLetter]) {
            maxLetter = ch;
        }
    }
    return maxLetter;
}
