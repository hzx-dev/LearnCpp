#include <iostream>

using namespace std;

int main() {
	int x, y;

	cin >> x >> y;
	if (-1 <= x <= 1 && -1 <= y <= 1) {
		cout << "yes";
	}
	else {
		cout << "no";
	}

	return 0;
}
