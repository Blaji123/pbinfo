#include <iostream>

using namespace std;
bool if_div(int n){
   if(n==1 || n==0) return 0;
   if(n!=2 && n%2==0) return 0;
   for(int d=3;d*d<=n;d++)
    if(n%d==0)
      return 0;
   return 1;
}
int interval(int n){
   bool ok=0;
  for(int x=n;x>0;x++)
  {
    if(if_div(x))
      ok=1;
    if(!if_div(x)&&ok==1)
      return x;
  }
}
int main()
{
    int n;
    cin>>n;
    cout<<interval(n);
    return 0;
}
