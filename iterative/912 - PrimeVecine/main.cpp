#include <iostream>

using namespace std;
bool is_prim(int n){
  if(n==0 || n==1) return 0;
  if(n!=2 && n%2==0) return 0;
  for(int d=3;d*d<=n;d++)
    if(n%d==0)
      return 0;
  return 1;
}
void sub(int n,int &a,int &b){
    int i=n-1,j=n+1,nr=0;
    a=0;b=0;
    while(nr<2)
    {
        if(is_prim(i)&&a==0)
            a=i,nr++;
        else
            i--;
        if(is_prim(j)&&b==0)
            b=j,nr++;
        else
            j++;
    }
}
int main()
{
    int n,a,b;
    cin>>n;
    sub(n,a,b);
    cout<<a<<" "<<b;
    return 0;
}
