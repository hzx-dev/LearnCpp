#include <iostream>
#include <string>

using namespace std;

struct {
    string name;
    int age;
} study;

int main(){
    cin >> study.name >> study.age;
    cout << study.name << endl <<
        study.age;
}