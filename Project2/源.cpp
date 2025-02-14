#include <iostream>

using namespace std;

int l[10][10] = { {3,3},
				  {66,6} };

int main() {
	int a, counter=0;
	cin >> a;


	for (int i = 0; i < a; i++)
	{
		counter++;
		//cout << "l[" << i << "] is " << l[i] << endl;
		for (int j = 0; j < a; j++)
		{
			cout << l[i][j] << " ";
		}
		cout << endl;
	}
	cout << "Counter is " << counter;
	return 0;
}