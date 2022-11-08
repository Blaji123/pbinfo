#include <iostream>

using namespace std;
bool echilibrat(int n){
   int nr=0,sPar=0,sImpar=0;
   while(n){
    if(nr%2==0)
        sPar+=n%10;
    else
        sImpar+=n%10;
    n/=10;
    nr++;
   }
  if(sPar%2==0 && sImpar%2==1)
    return 1;
  else
    return 0;
}
int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
