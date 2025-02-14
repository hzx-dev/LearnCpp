/**
 * @file:   P3156 【深基15.例1】询问学号.cpp   
 * @author: _Kevin_Huang
 * @date:   2025-02-11 22:08:04
 **/

#include <iostream>
#include <vector>

using namespace std;

int main() {
	
	int n, m;
	cin >> n >> m;
	
	vector<int> k;
	
	for (int i = 0; i < n; i++) {
		int t;
		cin >> t;
		k.push_back(t);
	}
	
	while (m--) {
		int t;
		cin >> t;
		cout << k[--t] << endl;
	}
	
	return 0;
}
