#include <iostream>

using namespace std;
char raw[15][15];
char transformed[15][15];
char transform90[15][15];
char transform180[15][15];
char transform270[15][15];
char transformFilp[15][15];
char transformFilp90[15][15];
char transformFilp180[15][15];
char transformFilp270[15][15];

bool compare(int n, char a[][15], char b[][15])
{
	for(int i = 0; i < n; i++)
		for(int j = 0; j < n; j++)
			if(a[i][j] != b[i][j])
				return false;
	return true;
}

void transformByRotate90(int n, char a[][15], char b[][15])
{
	for(int i = 1; i <= n; i++)
		for(int j = 1; j <= n; j++)
			b[j][n-i+1] = a[i][j];
	return;
}

void transformByFilp(int n, char a[][15], char b[][15])
{
	for(int i = 1; i <= n; i++)
		for(int j = 1; j <= n; j++)
			b[i][j] = a[i][n-j+1];
	return;
}


int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            cin >> raw[i][j];
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            cin >> transformed[i][j];
    if (compare(n, transformed, raw)) {cout << 6; return 0;}
    transformByRotate90(n, raw, transform90);
    if (compare(n, transformed, transform90)) {cout << 1; return 0;}
    transformByRotate90(n, transform90, transform180);
    if (compare(n, transformed, transform180)) {cout << 2; return 0;}
    transformByRotate90(n, transform180, transform270);
    if (compare(n, transformed, transformFilp)) {cout << 3; return 0;}
    transformByFilp(n, raw, transformFilp);
    if (compare(n, transformed, transformFilp)) {cout << 4; return 0;}
    transformByRotate90(n, transformFilp, transformFilp90);
    if (compare(n, transformed, transformFilp90)) {cout << 5; return 0;}
    transformByRotate90(n, transformFilp90, transformFilp180);
    if (compare(n, transformed, transformFilp180)) {cout << 5; return 0;}
    transformByRotate90(n, transformFilp180, transformFilp270);
    if (compare(n, transformed, transformFilp270)) {cout << 5; return 0;}
    cout << 7;
    return 0;
}