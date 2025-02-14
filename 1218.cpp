#include <iostream>

using namespace std;

int main(){
	char in;
	cin >> in;
	switch (in)
	{
		case '+':
			cout << "Add";
			break;
		case '-':
			cout << "Sub";
			break;
		case '*':
			cout << "Mul";
			break;
		case '/':
			cout << "Div";
			break;
		case '%':
			cout << "Mod";
			break;
		default:
			cout << "Error";
			break;
	}
	
	return 0;
}
