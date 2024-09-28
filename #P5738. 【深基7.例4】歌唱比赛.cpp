// Author: Kevin
// 这东西真的是我写的，除了注释都是我一行一行敲的。
// This is the solution of the problem 4 of the P5738.

#include <iostream>
#include <climits>
#include <iomanip>

using namespace std;

int main()
{
    int n, m;
    double maxScore = INT_MIN;

    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        int tmpMax = INT_MIN, tmpMin = INT_MAX;
        double score = 0, tmpTotal = 0, tmp = 0;
        for (int j = 0; j < m; j++)
        {
            cin >> tmp;
            if (tmp > tmpMax)
            {
                tmpMax = tmp;
            }
            if (tmp < tmpMin)
            {
                tmpMin = tmp;
            }
            tmpTotal += tmp;
        }
        tmpTotal -= tmpMax + tmpMin;
        score = tmpTotal / (double)(m - 2);
        if (score > maxScore)
            maxScore = score;
    }

    cout << fixed << setprecision(2) << maxScore << endl;

    return 0;
}
