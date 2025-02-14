/**
 * @file:   P4447 [AHOI2018初中组] 分组.cpp
 * @author: _Kevin_Huang
 * @date:   2025-02-10 16:59:17
 **/

#include <iostream>
#include <algorithm>

using namespace std;

int n, a[100005], l, r; 

int main() {
	
	cin >> n;
	
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	
	sort(a + 1, a + n + 1);
	
	return 0;
}
