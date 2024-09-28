#include <iostream>

using namespace std;

int main(){
    const int SIZE = 5;
    int iterable[SIZE] = {
        2,
        4,
        5,
        1,
        3,
    };
    int length = SIZE;
    int tmp = 0;

    for (int i = 0; i < (length - 1); i++)
    {
        for (int j = 0; j < (length - i - 1); j++)
        {
            if (iterable[j] > iterable[j+1])
            {
                cout << "Swap " << iterable[j] << " and " << iterable[j+1] << "!\n";
                swap(iterable[j], iterable[j+1]);

            }
            cout << "J is " << j << endl;
        }
        cout << "I is " << i << endl;
    }

    // cout << iterable;
    for (int index = 0; index < length; index++){
        cout << iterable[index] << " ";
    }

    return 0;
}