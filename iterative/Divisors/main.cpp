#include <iostream>

using namespace std;
int NrDiv(int n){
   int nr=0;
 for(int d=1;d*d<=n;d++){
    if(n%d==0)
      nr+=2;
      if(d*d==n)
        nr--;
    }
  return nr;
}
int NextNrDiv(int n){
  for(int d=n+1;d>0;d++)
     if(NrDiv(n)==NrDiv(d))
       return d;
}
int PrevNrDiv(int n){
  for(int d=n-1;d>=1;d--)
    if(NrDiv(n)==NrDiv(d))
      return d;
  return -1;
}
int main()
{
    int n;
    cin>>n;
    cout<<NrDiv(n)<<" "<<NextNrDiv(n)<<" "<<PrevNrDiv(n);
    return 0;
}
