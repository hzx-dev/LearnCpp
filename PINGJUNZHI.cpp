#include<iostream>
#include<cstdio>

using namespace std;

// Mian Function
int main(){
	double a, b, c, d, e;
	cin >> a >> b >> c; 	// Input a,b,c value
	d = (a + b + c) / 3;
	e = a * b * c; 
	printf("%.2lf %.2lf", d, e);	// Print value
	return 0; 
}
