#include <iostream>
#include <cstring>

using namespace std;

class BigInt {
    public:
    int num[5005];
    int len;
    BigInt (long long a) {
        // convert a to hp int
        len = 0;
        while (a) {
            num[len++] = a % 10;
            a /= 10;
        }
    }
    BigInt (int a) {
        // convert a to hp int
        len = 0;
        while (a) {
            num[len++] = a % 10;
            a /= 10;
        }
    }
    BigInt () {
        len = 0;
        memset(num, 0, sizeof(num)); // 初始化 num 数组
    }
    BigInt operator+ (BigInt b) {
        int maxlen = max(len, b.len);
        BigInt c;
        memset(c.num, 0, sizeof(c.num)); // 初始化 c.num 数组
        for (int i = 0; i < maxlen; i++) {
            c.num[i] += num[i] + b.num[i];
            if (c.num[i] >= 10) {
                c.num[i] -= 10;
                c.num[i + 1]++;
            }
        }
        if (c.num[maxlen])
            c.len = maxlen + 1;
        else
            c.len = maxlen;
        return c;
    }

    void output() {
        for (int i = len - 1; i >= 0; i--) {
            cout << num[i];
        }
    }
};

BigInt f1(1LL), f2(0LL), fn;

BigInt fib(int n)
{
	if(n==0)
		return 0;
	if(n==1)
		return 1;
	
	for(long long i=2;i<=n;i++) 
	{
		fn = f2 + f1;
		f2 = f1;
		f1 = fn;
	}


	return fn;
}

int main()
{
    long long a;
    cin >> a;
    // cout << n;

    // 使用递归算法计算
    fib(a + 1).output();

    return 0;
}