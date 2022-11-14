#include <iostream>

using namespace std;
void duplicare(int n,int &d){
  int p=1;
  bool ok=0;
  d=0;
  while(n){
    if(n%10%2==0)
    {
        ok=1;
        d=d+(n%10)*p;
        p*=10;
        d=d+(n%10)*p;
        p*=10;
    }
    else
    {
        d=d+(n%10)*p;
        p*=10;
    }
    n/=10;
  }
  if(ok==0)
    d=-1;
}
int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
