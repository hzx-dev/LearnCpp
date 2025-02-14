#include <iostream>
#include <vector>

using namespace std;

//vector<bool> tmp, num, new_num;

int main() {
	long long n; // 不开longlong见zz
	cin >> n;
	
//	// 处理n，当作二进制
//	while (n > 0) {
//		tmp.push_back(n % 2);
//		n /= 2;
//	} 
//	// 补0
//	while (tmp.size() < 32) {
//		tmp.push_back(0);
//	}
//	
//	// 反转
//	for (auto i = tmp.end() - 1; i >= tmp.begin(); i--) {
////		cout << *i;
//		num.push_back(*i);
//	}
//	
//	for (int i = 16; i < 32; i++) {
//		new_num.push_back(num[i]);
//	}
//	
//	for (int i = 0; i <= 15; i++) {
//		new_num.push_back(num[i]);
//	}
//	
//	// 转化十进制
//	long long t = 0;
//	
//	for (int i = 31, j = 1; i >= 0; --i, j *= 2) {
//		if (new_num[i]) {
//			t += j;
//		}
//	}
//	
//	cout << t;
	
	// 经过我114514年的思考，原来我想复杂了，只需要煎蛋的位运算就OK了。
	
	
	long long a = n & 0b00000000000000001111111111111111; // 后16位
	long long b = n & 0b11111111111111110000000000000000; // 前16位
	// 只需要a左移，b右移就好了
	long long c = (a << 16) + (b >> 16); // 优先级
	
	cout << c;
	
	return 0;
}

