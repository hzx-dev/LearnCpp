/*
	Name: 算身高.cc 
	Copyright: Kevin 
	Author: Kevin 
	Date: 27/02/23 13:20
*/


#include <iostream>

using namespace std;

int main(){
	double M, CM;
	const int a = 100;
	
	cout << "请输入你身高是多少厘米：___\b\b\b";
	cin >> CM;
	M = CM / a;
	cout << "你的身高是" << M << "米"; 
	
	return 0;
} 
