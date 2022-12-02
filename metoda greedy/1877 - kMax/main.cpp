#include <iostream>
#include <cmath>
using namespace std;
void sortare(int a[],int n){
   for(int i=1;i<=n;i++)
    for(int j=1;j<=n;j++)
      if(a[i]<a[j])
        swap(a[i],a[j]);
}
int main()
{
    int n,v[1001],k,sum=0;
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>v[i];
    cin>>k;
    sortare(v,n);
    for(int i=1;i<=n;i++)
    {
        if(i<=k) v[i]=v[i] * -1;
       sum+=v[i];
    }
    cout<<sum;
    return 0;
}
