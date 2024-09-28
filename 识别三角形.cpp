#include <iostream>
using namespace std;
int main()
{ /* 识别三角形 */
    int s1;
    int s2;
    int s3;
    cin >> s1 >> s2 >> s3;
    if (s1 == s2 and s2 == s3)
        cout << "Equilateral";
    else if (s1 > s2 && s1 > s3)
    {
        if (s1 * s1 == s2 * s2 + s3 * s3)
            cout << "Right";
        else if(s3+s2>s1)
            cout << "General";
        else{
            cout << "NO";
            }
    }
    else if (s2 > s1 && s2 > s3)
    {
        if (s2 * s2 == s1 * s1 + s3 * s3)
            cout << "Right";
        else if(s3+s2>s2)
            cout << "General";
        else{
            cout << "NO";
            }
    }
    else if (s3 > s2 && s3 > s1)
    {
        if (s3 * s3 == s2 * s2 + s1 * s1)
            cout << "Right";
        else if(s1+s2>s3)
            cout << "General";
        else{
            cout << "NO";
            }
    }
}