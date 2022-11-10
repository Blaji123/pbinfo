#include <iostream>

using namespace std;
void Impare(int &n){
   int nDub=0,p=1;
   while(n){
    if(n%10%2==1)
        nDub=nDub+(n%10-1)*p;
    else
        nDub=nDub+(n%10)*p;
    p*=10;
    n/=10;
   }
   n=nDub;
}
int main()
{
    int n;
    cin>>n;
    Impare(n);
    cout<<n;
    return 0;
}
