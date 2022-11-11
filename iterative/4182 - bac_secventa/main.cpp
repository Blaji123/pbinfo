#include <iostream>

using namespace std;
void secventa(int &n){
    int nDub=0,p=1;
   while(n){
    if(n%10==2&&n/10%10==2)
    {
        nDub=nDub+2*(p*10);
        p*=100;
        n/=100;
    }
    else
    {
        nDub=nDub+(n%10)*p;
        p*=10;
        n/=10;
    }
   }
   n=nDub;
}
int main()
{
    int n;
    cin>>n;
    secventa(n);
    cout<<n;
    return 0;
}
