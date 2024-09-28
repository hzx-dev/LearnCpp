// 杨辉三角
#include <iostream>
using namespace std;
int yhTriangle (int l, int c) {
    if (l == 0 || c == 0 || l == c) return 1;
    else return yhTriangle(l-1, c-1) + yhTriangle(l-1, c);
}

int main() { 
    int n;
    cin >> n;

    for (int i=0; i < n; i++) {for (int j=0; j <= i; j++) cout << yhTriangle(i, j) << " "; cout << endl;}

    return 0;
}