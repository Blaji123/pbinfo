#include <iostream>

using namespace std;
void numar(int n,int k,int &nDub){
   int f[11]={0};
   nDub=0;
   while(n){
    f[n%10]++;
    n/=10;
   }
   for(int i=9;i>=0;i--)
    for(int j=1;j<=f[i]&&k;j++,k--)
       nDub=nDub*10+i;
}
int main()
{
    int n,k,nDub;
    cin>>n>>k;
    numar(n,k,nDub);
    cout<<nDub;
    return 0;
}
