#include <iostream>
#include <string>

using namespace std;

struct Hello{
    int a;
};

void print(string str);
void print(int num);
void print(Hello h, int num2);


int main(){
    string a = "Just";
    int n = 666;
    Hello MyStruct {65};
    print(a); // String
    print(n); // Int
    print(MyStruct, 6); // Struct Version

    return 0;
}

void print(string str){
    cout << str;
}
void print(int num){
    cout << num;
}
void print(Hello h, int num2){
    cout << h.a << " " << num2;
}