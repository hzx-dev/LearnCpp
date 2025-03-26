#include <string>
#include <cstring>
#include <iostream>
#include <cstdio>

using namespace std;

void process(string a, string b)
{
    if (a.empty())
        return;
    char root = a[0];
    int root_index = b.find(root);
    a.erase(a.begin());
    string la = a.substr(0, root_index);
    string ra = a.substr(root_index);
    string lb = b.substr(0, root_index);
    string rb = b.substr(root_index + 1);

    process(la, lb);
    process(ra, rb);

    printf("%c", root);
}
int main()
{
    string a, b;
    cin >> a >> b;
    process(b, a);
    return 0;
}
