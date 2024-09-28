#include <iostream>

using namespace std;

int main()
{   
    
   int n[101];
   int i=0, tmp=1;

   while(true) {
      cin >> tmp;
      if(tmp == 0) {
         break;
      }
      n[i] = tmp;
      i++;
   }

    for(int j=i-1; j>=0; j--) {
      cout << n[j] << " ";
   }
   
   return 0;
}
