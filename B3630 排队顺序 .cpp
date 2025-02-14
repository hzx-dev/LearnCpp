/**
 * @file:   P3630.cpp 
 * @author: _Kevin_Huang
 * @date:   2025-02-11 22:11:55
 **/

#include <iostream>

using namespace std;

int list[1000005];

int main() {
	int n;
	
	cin >> n;
	
	for (int i = 1; i <= n; i++) {
		cin >> list[i];
	}
	
	int now;
	cin >> now;
	cout << now << " ";
	
	while (list[now]) {
		cout << list[now] << " ";
		now = list[now];
	}
	
	return 0;
}
