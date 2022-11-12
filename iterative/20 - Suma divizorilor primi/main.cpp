#include <iostream>

using namespace std;
bool is_prim(int n){
  if(n==1 || n==0) return 0;
  if(n!=2 && n%2==0) return 0;
  for(int d=3;d*d<=n;d++)
    if(n%d==0)
       return 0;
  return 1;
}
void sum_div_prim(int n,int &sum){
    sum=0;
   for(int d=2;d*d<=n;d++)
    if(is_prim(d) && n%d==0)
    {
       sum+=d;
       if(d*d<n && is_prim(n/d))
        sum+=n/d;
    }
    if(is_prim(n))
        sum+=n;
}
int main()
{
    int n,sum;
    cin>>n;
    sum_div_prim(n,sum);
    cout<<sum;
    return 0;
}
