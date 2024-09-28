#include <iostream>
#include <vector>

using namespace std;

// n 个人围成一圈，编号依次为 1、2、3……n 。从第一个人开始报数，数到 m 的人出列，再由下一个人重新从 1 开始报数，数到 m 的人再出圈。以此类推，直到所有的人都出列。请输出依次出圈人的编号。 

vector<int> ysf;

int main()
{
    int n, m;

    cin >> n >> m;

    for (int i = 1; i <= n; i++) {
        ysf.push_back(i);
    }

    int count = 0;
    int index = 0;

    while (ysf.size() > 1) {
        count++;
        index = (index + m - 1) % ysf.size();
        cout << ysf[index] << " ";
        ysf.erase(ysf.begin() + index);
    }

    for (auto i : ysf) cout << i << " ";
    
    return 0;
}
