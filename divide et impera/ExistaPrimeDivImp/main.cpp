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
int prime_verificare(int v[],int st,int dr){
  int a,b;
  if(st==dr)
  {
    if(v[st]<2)
        return 0;
    else
     if(prime(v[st]))
       return 1;
    else
        return 0;
  }
 else
 {
  int m=(st+dr)/2;
  a=prime_verificare(v,st,m);
  b=prime_verificare(v,m+1,dr);
  if(a || b)
    return 1;
  else
    return 0;
 }

}
int main()
{
    int n,v[201];
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>v[i];
    if(prime_verificare(v,1,n))
        cout<<"DA";
    else
        cout<<"NU";
    return 0;
}
