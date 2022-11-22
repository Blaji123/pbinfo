#include <iostream>

using namespace std;
void aranjare(int a[] , int n)
{
    int b[10001];
    for(int i = 0 ; i < n ; ++i)
        b[i]=a[i];
    int p = 0;
    for(int i = 0 ; i < n ; ++i)
    {
        if(b[i]%2==1)
        {
            a[p]=b[i];
            p++;
        }
    }
    for(int i = 0 ; i < n ; ++i)
    {
        if(b[i]%2==0)
        {
            a[p]=b[i];
            p++;
        }
    }
}
int main()
{
    int n,v[200];
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>v[i];
    aranjare(v,n);
    for(int i=0;i<n;i++)
        cout<<v[i]<<" ";
    return 0;
}
