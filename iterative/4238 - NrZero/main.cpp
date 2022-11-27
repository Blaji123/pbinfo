#include <iostream>

using namespace std;
int NrZero(int a[],int n){
   int st=1,dr=n,nr=0;
   while(st<=dr){
    int m=(st+dr)/2;
    if(a[m]==0)
    {
        nr++;
        int x=m;
        while(a[--m]==0)
            nr++;
        while(a[++x]==0)
            nr++;
        break;
    }
    else if(a[m]%2==1)
        st=m+1;
    else if(a[m]%2==0)
        dr=m-1;
   }
   return nr;
}
int main()
{
    int n,a[200];
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    cout<<NrZero(a,n);
    return 0;
}
