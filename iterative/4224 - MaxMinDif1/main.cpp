#include <iostream>

using namespace std;
int MaxMinDif1(int a[], int n){
    int nr=1,nrmax=-1;
    for(int i=0;i<n-1;i++)
        for(int j=i+1;j<n;j++)
          if(a[i]>a[j])
            swap(a[i],a[j]);
    for(int i=0;i<n-1;i++)
    {
        if(a[i+1]-a[i]==0 || a[i+1]-a[i]==1)
            nr++;
        else
        {
            if(nr>nrmax)
                nrmax=nr;
            nr=1;
        }
    }
    return nrmax;
}
int main()
{
    int a[100],n;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    cout<<MaxMinDif1(a,n);
    return 0;
}
