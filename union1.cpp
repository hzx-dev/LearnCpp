#include <iostream>


union Hello{
	int gg;
	double Nice;
}; 

int main(){
	using namespace std;
	Hello myfirst;
	myfirst.Nice = 19.99;
	cout << myfirst.gg << endl <<myfirst.Nice;
}
