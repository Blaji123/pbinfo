#include <iostream>
#include <cmath>
using namespace std;
int FGreater(int a[], int n, int x){
    int mini,ok=0;
  for(int i=0;i<n;i++)
    if(a[i]>x)
        if(ok==0)
    {
        mini=a[i];
        ok=1;
    }
        else if(a[i]<mini)
            mini=a[i];
  if(ok==1)
    return mini;
    return -1;
}
int main()
{
    int a[200],n,x;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    cin>>x;
    cout<<FGreater(a,n,x);
    return 0;
}
