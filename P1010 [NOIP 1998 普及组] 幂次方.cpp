#include <iostream>
#include <vector>

using namespace std;

vector<string> ans;

void calc(int n, bool in) {
	if (n < 1) return;
	if (n == 1) {
		ans.push_back("2(0)");
		return ;
	}
	if ((n & n - 1) == 0) {
		ans.push_back("2(");
		calc(n / 2, 1);
		ans.push_back(")");
		return ;
	}
//	cout << "Perpare to Calc" << n << endl;
	int weight = 1;
	while (n >= 1) {
		if (!in && weight != 1) ans.push_back("+");
		ans.push_back("2(");
//		cout << (n & 1) * weight << "  faf  ";
		if ((n & 1) * weight > 1) calc((n & 1) * weight, 1);
		else if ((n & 1) * weight > 1) ans.push_back("0");
		ans.push_back(")");
		weight *= 2;
		n >>= 1;
	}
}

int main() {
	
	int n;
	cin >> n;
	
	calc(n, 0);
	
	for (auto item : ans) {
		cout << item;
	}
	
	return 0;
}

