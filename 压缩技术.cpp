#include <iostream>

using namespace std;

int main(){
    int size, tot=0, tmp=0, num = 0, i = 0;
    cin >> size;

    int arr[size * size] = {0};

    while (tot < size * size) {
        cin >> tmp;
        tot += tmp;
        if (num != 0){
            int current = i;
            for (; i < tmp + current; i++) {
                arr[i] = 1;
            }
        }
        else
            i += tmp;
        if (num == 0) num = 1; else num = 0;
    }

    for (int i = 0; i < size * size; i++) {
        cout << arr[i];
        if ((i + 1) % size == 0) cout << endl;
    }

    return 0;
}