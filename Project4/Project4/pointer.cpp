#include <iostream>

int main() {
	using namespace std;

	int ver = 6;

	cout << "ver value: " << ver << endl;
	cout << "ver address: " << &ver << endl;

	int* p_ver = &ver;

	cout << "p_ver value: " << *p_ver << endl;
	cout << "p_ver address: " << &p_ver << endl;
	cout << "p_ver link to "
		"address: " << p_ver << endl;

	++*p_ver;

	cout << "now ver value: " << ver << endl;

	return 0;
}