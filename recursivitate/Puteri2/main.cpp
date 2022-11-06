#include <iostream>
#include <cmath>
using namespace std;
long long puteri(int a,int n){
  if(n%2==1)
    return a*puteri(a,n-1);
  else
    return pow(pow(a,n/2),2);
}
int main()
{
    int a,n,p,m;
    cin>>a>>n>>p;
    m=pow(10,p);
    cout<<puteri(a,n)%m;
    return 0;
}
