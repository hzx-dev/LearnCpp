#include <iostream>
#include <string>
#include <cmath>

using namespace std;
char s[1000] = {0};
int main(){
    
    char c;
    int index=0, count=0;

    while (cin >> c)
    {   
        cout << c;
        s[index] = c;
        index++;
    }

    // cout << sqrt(index) << " ";
    // for (int i = 1; i < index; i++) {
    //     if (s[i] != s[i-1]) {
    //         cout << count << " ";
    //         count = 0;
    //     } else {
    //         count++;
    //     }
    // }

    return 0;
}
// #include<iostream>
// #include<cmath>
// using namespace std;
// char s[40005];
// int main()
// {
// 	char c;
// 	int inx = 0;
// 	while(cin >> c)
// 	{
// 		inx ++;
// 		s[inx] = c;
// 	}
// 	cout << sqrt(inx) << ' ';
// 	int cnt = 1;
// 	if(s[1] == '1') cout << 0 << ' '; // 排除起始字符是 1 的情况
// 	for(int i = 2; i <= inx + 1; i++) // inx + 1 可以保证最后一个数字的输出
// 	{
// 		if(s[i] == s[i-1]) cnt++;
// 		else{cout << cnt << ' '; cnt = 1;}
// 	}
// }