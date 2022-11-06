#include <iostream>
#include <cmath>
using namespace std;
int prime(int n){
    int nr=0;
  for(int d=2;d<=sqrt(n);d++)
    if(n%d==0)
      nr++;
  if(nr==0)
    return 1;
  else
    return 0;
}
int prim_max;
int prime_maxim(int v[],int st,int dr){
  int a,b;
  if(st==dr)
  {
    if(v[st]<2)
        return 0;
    else
     if(prime(v[st]))
       return v[st];
    else
        return 0;
  }
 else
 {
  int m=(st+dr)/2;
  a=prime_maxim(v,st,m);
  b=prime_maxim(v,m+1,dr);
  if(a && a>prim_max)
    prim_max=a;
  if(b && b>prim_max)
    prim_max=b;
 }
 return prim_max;
}
int main()
{
    int n,v[1001];
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>v[i];
    cout<<prime_maxim(v,1,n);
    return 0;
}
