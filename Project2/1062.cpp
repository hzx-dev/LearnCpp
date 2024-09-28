#include <iostream>

using namespace std;

int main() {
	long a;
	cin >> a;
	if (a > 9 && a < 100) {
		cout << "Yes";
	}
	else {
		cout << "No";
	}
	return 0;
}