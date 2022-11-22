#include <iostream>

using namespace std;
int multiplu(int a[],int n,int k){
    int nr=0;
   for(int i=0;i<n;i++){
    if(a[i]%k==0 && a[i]%10==k)
        nr++;
   }
   return nr;
}
int main()
{
    int a[200],n,k;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    cin>>k;
    cout<<multiplu(a,n,k);
    return 0;
}
