#include <iostream>
#include <cstdio>

using namespace std;

int main(){
    double n = 0, m = 0, book = 0.0, d = 0.0;
    cin >> n >> m;
    book = m * 0.8;
    d = n - book;
    printf("%.2lf", d);

    return 0;
}
