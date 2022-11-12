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
    int nr=0;
  for(int i=n-1;i>1;i--)
     {
         if(is_prim(i)&&nr==1)
         {
             b=i;
             nr++;
         }
         if(is_prim(i)&&nr==0)
         {
             a=i;
             nr++;
         }
         if(nr==2)
            break;
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
