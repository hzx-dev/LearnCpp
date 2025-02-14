#include <iostream>
#include <cmath>
using namespace std;

int solve1(int n){
    return n*n;
}

int solve2(int n){
    int sum=0;
    for(int i=1;i<=sqrt(n);i++){
        if(n%i==0){
            if(n/i==i){
                sum+=i*i;
            }else{
                sum+=i*i+(n/i)*(n/i);
            }
        }
    }
    return sum;
}
int main(){
    int n;
    cin>>n;
    cout<<solve2(solve1(n))<<" "<<solve1((solve2(n)))<<endl;
    return 0;
}
