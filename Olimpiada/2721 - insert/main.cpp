#include <iostream>

using namespace std;
void Insert(int a[], int &n){
    int nr=0;
    for(int i=0;i<n;i++)
        if(a[i]%2==1)
          nr++;
    for(int i=n+nr-1,j=n-1;i>=0,j>=0;i--,j--)
        if(a[j]%2==1)
    {
        a[i]=a[j]*2;
        a[i-1]=a[j];
        i--;
    }
      else
        a[i]=a[j];
   n+=nr;
}
int main()
{
    int a[200],n;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    Insert(a,n);
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    return 0;
}
