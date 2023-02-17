#include <fstream>

using namespace std;
ifstream cin("profu.in");
ofstream cout("profu.out");
#define ll long long
int a[500001],k,n;
bool f(int a[],int n,ll x,int k){
   ll s=0;
   int c=1;
   for(int i=1;i<=n;i++){
      s+=a[i];
      if(s>x){
          c++;
          if(c>k) return 0;
          s=a[i];
      }
   }
   if(c<=k)
      return 1;
   else
      return 0;
}
ll cautarebinara(int a[],int n,ll x,int maxi,int k){
  ll st=maxi,dr=x;
  while(st<=dr){
    ll m=(st+dr)/2;
    if(f(a,n,m,k)) dr=m-1;
    else st=m+1;
  }
  return st;
}
int main()
{
    ll x=0;
    int maxi=0;
    cin>>n>>k;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        x+=a[i];
        if(a[i]>maxi)
            maxi=a[i];
    }
    cout<<cautarebinara(a,n,x,maxi,k);
    return 0;
}
