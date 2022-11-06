#include <iostream>
#include <cmath>
using namespace std;
int cifreImpare(int n){
    int nr=0,p=1;
    bool ok=0;
  while(n){
     if(n%10%2==0)
     {
        nr=nr+(n%10)*p;
        p*=10;
     }
     else
        ok=1;
     n/=10;
  }
  if(ok==0 || nr==0)
    return -1;
  return nr;
}
int main()
{
    int n;
    cin>>n;
    cout<<cifreImpare(n);
    return 0;
}
