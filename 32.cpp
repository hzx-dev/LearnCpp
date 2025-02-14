#include <iostream>
#include <cstdio>

using namespace std;

int main(){
	char input;
	cin >> input;
	
	int ascll = (int)input;
//	cout << input;
	if (ascll>64&&ascll<91){
		ascll+=32;
	}
	else if (ascll>96&&ascll<123){
		ascll-=32;
	}
	
	printf("%c", ascll);
	return 0;
}
