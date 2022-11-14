#include <iostream>

using namespace std;
int s=0;
int suma(int v[],int n){
  if(n==0)
    return v[0];
  else{
    s+=v[n-1];
    n--;
    suma(v,n);
  }
  return s;
}
int main()
{
    int v[20],n;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>v[i];
    cout<<suma(v,n);
    return 0;
}
