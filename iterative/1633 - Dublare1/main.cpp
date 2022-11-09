#include <iostream>
#include <cmath>
using namespace std;
void dublare1(int &n){
   int p=1,nn=0;
   while(n>10){
    nn=nn+(n%10)*p;
    p*=10;
    n/=10;
   }
   nn=nn+(n%10)*p+(n%10)*(p*10);
   n=nn;
}
int main()
{
    int n;
    cin>>n;
    dublare1(n);
    cout<<n;
    return 0;
}
