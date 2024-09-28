#include <iostream>

using namespace std;

int main()
{
    int ret = 0;
    int x = -65536;
    int k =  ((x)&(x-1));
    for (;x;x&=x-1){ret++;}
    cout<<ret+k<<endl;
    return 0;
}
