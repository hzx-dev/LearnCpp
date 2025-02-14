#include <iostream>
#include <queue>

using namespace std;

queue<int> a;

int main() {
	
	int n;
	cin >> n;
	
	while(n--){
		int op;
		cin >> op;
		switch (op) {
		case 1:
			int k;
			cin >> k;
			a.push(k);
			break;
		case 2:
			if (a.size() == 0) {
				cout << "ERR_CANNOT_POP" << endl;
			} else {
				a.pop();
			}
			break;
		case 3:
			if (a.size() == 0) {
				cout << "ERR_CANNOT_QUERY" << endl;
			} else {
				cout << a.front() << endl;
			}
			break;
		case 4:
			cout << a.size() << endl;
		}
	}
	
	return 0;
}

