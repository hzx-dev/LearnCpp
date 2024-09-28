#include <iostream>
#include <string>

using namespace std;

int main() {
	cout << "Cout example:" << endl;
	cout << "Hello World!" << endl;
	
	cout << "String example:" << endl;
	string name;
	cout << "Hi, what's your name?" << endl << ">>> ";
	cin >> name;
	cout << "Hi, " << name << "!" << endl;

	cout << "Cin example:" << endl;
	cout << "1 + 1 = ";
	int res;
	cin >> res;
	
	if(res == 2){
		cout << "You're right!" << endl;
	}else{
		cout << "You're wrong!" << endl;
	}
	
	cout << "While example:" << endl;
	
	res = -1;
	
	while(res != 2){
		res = -1;
		cout << "1 + 1 = ";
		cin >> res;
		if(res == 2){
			cout << "You're right!" << endl;
		}else
		{
			cout << "You're wrong!" << endl;
		}
	}
	
	cout << "Do...while example:" << endl;
	
	do{
		cout << "1 + 1 = ";
		cin >> res;
		if(res == 2){
			cout << "You're right!" << endl;
		}else{
			cout << "You're wrong!" << endl;
		}
	}while(res != 2);
	
	cout << "For example:" << endl;
	
	for(int i=0;i<=10;i++){
		cout << i << endl;
	}
	
	cout << "Pointer example:" << endl;
	

	return 0;
}

