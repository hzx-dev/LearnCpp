#include <iostream>
#include <string>
#include <stack>

using namespace std;

stack<int> num;

int main()
{
    int a;
    long long result = 0;
    char op;
    
    cin >> a;

    num.push(a % 1000);

    while (cin >> op >> a) {
        if (op == '*') {
            int top = num.top();
            num.pop();
            num.push((top * a) % 1000);
        }
        else {
            num.push(a % 1000);
        }
    }

    while (!num.empty()) {
        result += num.top();
        result %= 1000;
        num.pop();
    }

    cout << result << endl;
    
    return 0;
}
