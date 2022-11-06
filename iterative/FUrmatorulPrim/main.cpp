#include <iostream>

using namespace std;
bool if_prim(int n){
   if(n==0 || n==1) return 0;
   if(n!=2 && n%2==0) return 0;
   for(int d=3;d*d<=n;d++)
      if(n%d==0) return 0;
   return 1;
}
int nr_prim(int n){
  for(int d=n+1;d>0;d++)
    if(if_prim(d))
        return d;
}
int main()
{
    int n;
    cin>>n;
    cout<<nr_prim(n);
    return 0;
}
