#include <iostream>

using namespace std;

void print(int &a);

int main(){
    int b = 10;
    int &a = b;

    cout << "b is " << b << endl << " now a is " << a;
    b++;

    cout << "\nb plus one, now b is " << b << endl << "now a is " << a;
    a=+50;
    cout << "\na plus 50, now b is " << b << endl << "now a is " << a << endl;

    print(b);


    return 0;
}

void print(int &a){
    cout << &a << " " << a << endl;
}