#include <iostream>

using namespace std;
void duplicare(int &n){
  int nn=0,p=1;
  while(n){
    if(n%10%2==0)
    {
        nn=nn+(n%10)/2*p;
        p*=10;
        nn=nn+(n%10)*p;
        p*=10;
    }
    else
    {
        nn=nn+(n%10)*p;
        p*=10;
    }
    n/=10;
  }
  n=nn;
}
int main()
{
    int n;
    cin>>n;
    duplicare(n);
    cout<<n;
    return 0;
}
