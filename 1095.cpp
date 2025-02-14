#include <iostream>

using namespace std;


int main() {
	double x=0, y=0;

	cin >> x >> y;
//	cout << x << " " << y << " " << (x<-1 && x>1) << " " <<(y<-1 && y>1);
	if ((x>=-1 && x<=1) && (y>=-1 && y<=1)) {
		cout << "yes";
	} else {
		cout << "no";
	}

	return 0;
}
