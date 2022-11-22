#include <iostream>

using namespace std;
int CautaPoz(int a[], int n){
    int i,S1=0,S2=0,mini=;
  for(i=0;i<n/2;i++)
  {
    S1+=a[i];
    S2+=a[n-i-1];
    if(abs(S1-S2)<mini)
    {
      mini=abs(S1-S2);
      iMin=i;
    }
  }
  return iMin;
}
int main()
{
    int a[245],n;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    cout<<CautaPoz(a,n);
    return 0;
}
