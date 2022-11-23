#include <iostream>
#include <cmath>
using namespace std;
void numar(int n,int a[],int &k){
    int maxi=a[0],mini=a[0];
   for(int i=1;i<n;i++)
   {
       if(a[i]<mini)
         mini=a[i];
       else if(a[i]>maxi)
          maxi=a[i];
   }
   k=maxi*pow(10,(int)log10(mini)+1)+mini;
}
int main()
{
    int n,a[200],k;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    numar(n,a,k);
    cout<<k;
    return 0;
}
