#include <iostream>

using namespace std;

int main(){
    int n[100]={0};
    int num, j=0;

    cin >> num;

    while (num != 1)
    {
        n[j] = num;
        // cout << num << j<< " ";
        j++;
        if (num % 2 == 0){
            num /= 2;
        }
        else{
            num = 3 * num + 1;
        }
    }

    for (int i = j; i >= 0; i--){
        cout << n[i] << " ";
    }

}