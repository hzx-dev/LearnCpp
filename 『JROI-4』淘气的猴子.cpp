#include <iostream>
#include <vector>
#include <stack>
#include <cmath>

using namespace std;

struct Op
{
    int op;
    int a;
    int b;
};

stack<Op> ops;
vector<int> nums;

int main()
{

    int n, m;

    cin >> n >> m;

    nums.push_back(0);

    for (int i = 0; i < n; i++) {
        int tmp;
        cin >> tmp;
        nums.push_back(tmp);
    }

    for (int i = 0; i < m; i++) {
        Op tmp;
        cin >> tmp.op >> tmp.a >> tmp.b;
        ops.push(tmp);
    }

    for (int i = 0; i < m; i++) {
        Op currentOp = ops.top();
        ops.pop();
        // cout << currentOp.op << " " << currentOp.a << " " << currentOp.b << endl;

        if (currentOp.op == 1) {
            if (currentOp.a == currentOp.b) {
                nums[currentOp.a] /= 2;
            }
            else {
                nums[currentOp.a] = nums[currentOp.a] - nums[currentOp.b];
            }
        } else if (currentOp.op == 2) {
            if (currentOp.a == currentOp.b) {
                nums[currentOp.a] = sqrt(nums[currentOp.a]);
            }
            else {
                nums[currentOp.a] = nums[currentOp.a] / nums[currentOp.b];
            }
        }
        // for (int i = 1; i <= n; i++) {
        //     cout << nums[i] << " ";
        // }
    }

    for (int i = 1; i <= n; i++) {
        cout << nums[i] << " ";
    }

    return 0;
}
