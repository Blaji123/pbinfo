#include <iostream>
#include <cmath>
using namespace std;
void detcifre(int n,int &pCif,int &uCif){
    if(n<10)
    {
        pCif=n%10;
        uCif=n%10;
    }
    else
    {
   uCif=n%10;
   pCif=n/pow(10,(int)log10(n));
    }
}
int main()
{
    int n,pCif,uCif;
    cin>>n;
    detcifre(n,pCif,uCif);
    cout<<pCif<<" "<<uCif;
    return 0;
}
