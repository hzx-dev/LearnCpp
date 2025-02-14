#include <iostream>
#include <string>
#include <cmath>
#include <cstring>
#include <algorithm>

using namespace std;

int n, m;
long long decm;
string num;

int to_number(char &c) {
	int k;
	if (c > '9') {
		k = c - 'A' + 10;
	} else {
		k = c - '0';
	}
	return k;
}

char process_digit(int n) {
	if (n >= 10) {
		return n + 'A' - 10;
	} else {
		return n + '0';
	}
}

long long to_dec(int k, int p) {
	// k: 数字
	// p: 位数
	long long w = pow(n, p); // 该位的权重
	return k * w;
}

string dec_to_m(long long d) {
	string res = "";
	while (d) {
		res += process_digit(d % m);
		d /= m;
	}
	reverse(res.begin(), res.end());
	return res;
}

int main() {
	cin >> n;
	cin >> num;
	cin >> m;
	
	if (n == m) {
		cout << num;
		return 0;
	}
	
	for (int i = num.size() - 1; i >= 0; i--) {
		int k = to_number(num[i]);
		// 将k转化为十进制
		decm += to_dec(k, num.length() - i - 1);
//		cout << k << " " << i << endl;
//		cout << to_dec(k, i) << endl;
	}
//	cout << decm;
	cout << dec_to_m(decm);	
	
	return 0;
}

