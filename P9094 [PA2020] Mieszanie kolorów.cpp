#include <iostream>

using namespace std;

int A[1000005], B[1000005], C[1000005]; // 定义三个数组，分别表示黄色、蓝色、红色的颜料数量

int main()
{
    int n, m; // n 表示有 n 桶油漆，进行了 m 次操作

    cin >> n >> m;

    // cout << "init OK" << endl;
    
    // 进行操作

    for (int i = 1; i <= m; i++) {
        int l, r, x; // l 表示左端点，r 表示右端点，x 表示颜色

        cin >> l >> r >> x;

        if(x==1) A[l]++,A[r+1]--;//黄色颜料处理
		if(x==2) B[l]++,B[r+1]--;//蓝色颜料处理
		if(x==3) C[l]++,C[r+1]--;//红色颜料处理
    }

    int cnt = 0;

    for(int i = 1;i <= n;i++) {
        A[i] += A[i - 1];
        B[i] += B[i - 1];
        C[i] += C[i - 1];
    }
	for(int i = 1;i <= n;i++) {
	    if( A[i] && B[i] && !C[i]) cnt++; //判断是否为绿色
    }

    cout << cnt << endl;

    return 0;
}
