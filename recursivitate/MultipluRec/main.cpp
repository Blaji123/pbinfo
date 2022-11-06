#include <iostream>

using namespace std;
int multiplu(int a[],int n,int k){
  if(n==0)
    return 0;
  else
  {
      if(a[n-1]%k==0&&a[n-1]%10==k)
        {
            n--;
            return 1+multiplu(a,n,k);
        }
        else
        {
            n--;
            return multiplu(a,n,k);
        }
  }
}
int main()
{
    int a[100],n,k;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    cin>>k;
    cout<<multiplu(a,n,k);
    return 0;
}
