#include <iostream>

using namespace std;
int cmmnr(int n){
  int a[11],i=0,nr=0;
  while(n!=0){
    a[++i]=n%10;
    n/=10;
  }
  for(int j=1;j<i;j++)
    for(int k=j+1;k<=i;k++)
       if(a[j]<a[k])
         swap(a[j],a[k]);
  for(int j=1;j<=i;j++)
    nr=nr*10+a[j];
  return nr;
}
int main()
{
    int n;
    cin>>n;
    cout<<cmmnr(n);
    return 0;
}
