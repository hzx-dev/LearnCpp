#include <iostream>

using namespace std;

int main()
{
    int n, k;

    cin >> n >> k;
    
    int i = 0;

    while (n != 0) {
        i++; 
        n--;
        if (i % k == 0) n++;
    }
    
    cout << i;
    
    return 0;
}
