#include <iostream>

using namespace std;
int count(double a[],int n){
    double sum=0,ma;
    int nr=0;
    for(int i=0;i<n;i++)
        sum+=a[i];
    ma=(double)sum/n;
    for(int i=0;i<n;i++)
        if(a[i]>=ma)
            nr++;
    return nr;
}
int main()
{
    double a[200];
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    cout<<count(a,n);
    return 0;
}
