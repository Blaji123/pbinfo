#include <iostream>

using namespace std;
void sortare(int a[],int n){
   for(int i=1;i<=n;i++)
    for(int j=1;j<=n;j++)
      if(a[i]<a[j])
        swap(a[i],a[j]);
}
int main()
{
    int n,S,a[1001];
    cin>>n>>S;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    sortare(a,n);
    int i=1;
    while(S-a[i]>=0 && i<=n)
         S-=a[i],i++;
    if(i<n)
     cout<<i-1<<" "<<a[i]-S;
    else
      cout<<i-1<<" "<<0;
    return 0;
}
