//LEDScreen.cpp -- coutput to LED screen using C++
//Author: Kevin
//Date: 2021/06/01
//Description: This program is used to output to LED screen using C++.

/*
XXX...X.XXX.XXX.X.X.XXX.XXX.XXX.XXX.XXX
X.X...X...X...X.X.X.X...X.....X.X.X.X.X
X.X...X.XXX.XXX.XXX.XXX.XXX...X.XXX.XXX
X.X...X.X.....X...X...X.X.X...X.X.X...X
XXX...X.XXX.XXX...X.XXX.XXX...X.XXX.XXX
*/


#include <iostream>
#include <string>

using namespace std;

int main(){
    string zero[5] = {"XXX", 
                      "X.X", 
                      "X.X", 
                      "X.X", 
                      "XXX"};
    string one[5] = {"..X", 
                     "..X", 
                     "..X",
                     "..X", 
                     "..X"};
    string two[5] = {"XXX", 
                     "..X", 
                     "XXX", 
                     "X..", 
                     "XXX"};
    string three[5] = {"XXX", 
                       "..X", 
                       "XXX", 
                       "..X", 
                       "XXX"};
    string four[5] = {"X.X", 
                      "X.X", 
                      "XXX", 
                      "..X", 
                      "..X"};
    string five[5] = {"XXX", 
                      "X..", 
                      "XXX", 
                      "..X", 
                      "XXX"};
    string six[5] = {"XXX", 
                     "X..", 
                     "XXX", 
                     "X.X", 
                     "XXX"};
    string seven[5] = {"XXX", 
                       "..X", 
                       "..X", 
                       "..X", 
                       "..X"}; 
    string eight[5] = {"XXX", 
                       "X.X", 
                       "XXX", 
                       "X.X", 
                       "XXX"};
    string nine[5] = {"XXX", 
                      "X.X", 
                      "XXX", 
                      "..X", 
                      "XXX"};

    string* numbers[10] = {zero, one, two, three, four, five, six, seven, eight, nine};

    int n;
    cin >> n;
    
    char tmp;
    int number[n];

    for(int i = 0; i < n; i++) {
        cin >> tmp;
        number[i] = tmp - '0';
    }

    for (int y = 0; y < 5; y++){
        for(int i = 0; i < n; i++) {
            string digit = numbers[number[i]][y];
            if (n - 1 != i)
            cout << digit << ".";
            else
            cout << digit;
        }
        cout << endl;
    }
    

    return 0;
}
