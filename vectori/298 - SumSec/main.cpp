#include <fstream>

using namespace std;
ifstream cin("sumsec.in");
ofstream cout("sumsec.out");
bool is_prim(int n){
  if(n==1 || n==0) return 0;
  if(n!=2&&n%2==0) return 0;
  for(int d=3;d*d<=n;d++)
    if(n%d==0)
      return 0;
  return 1;
}
int main()
{
    int n,ok=0;
    long long x,S_prim=0,S_after=0;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>x;
        S_after+=x;
        if(is_prim(x)&&!ok)
            ok=1;
        if(ok)
            S_prim+=x;
        if(is_prim(x)&&ok)
            S_after=0;
    }
    cout<<S_prim-S_after;
    return 0;
}
