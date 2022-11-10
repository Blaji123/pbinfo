#include <iostream>
#include <cmath>
using namespace std;
void inserare(int &n){
   int nDub=0,p=1;
   while(n>9){
     nDub=nDub+(n%10)*p+(abs(n%10-n/10%10))*(p*10);
     p*=100;
     n/=10;
   }
   nDub=nDub+(n%10)*p;
   n=nDub;
}
int main()
{
    int n;
    cin>>n;
    inserare(n);
    cout<<n;
    return 0;
}
