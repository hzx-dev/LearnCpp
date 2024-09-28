#include <iostream>

using namespace std;

int total(int arr[][3], int line, int row);

int main(){
    int arr[3][3] {
        {6, 6, 6},
        {3, 3, 3},
        {5, 5, 5}
    };

    total(arr, 3, 3);

    return 0;
};

int total(int arr[][3], int line, int row){
    int t = 0;
    for (int i; i < line; i++){
        for (int j; j < row; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return t;
}
