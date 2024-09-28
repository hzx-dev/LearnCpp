#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char text[20];
    
    gets(text);
    for (int i = 0; i < strlen(text); i++)
    cout << i << " is " << text[i] << endl;
    
    return 0;
}
