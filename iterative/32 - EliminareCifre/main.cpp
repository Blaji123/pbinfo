#include <iostream>

using namespace std;
void P(int &n,int c){
  int nDub=0,p=1;
  while(n){
    if(n%10!=c){
        nDub=nDub+(n%10)*p;
        p*=10;
    }
    n/=10;
  }
  n=nDub;
}
int main()
{
    int n,c;
    cin>>n>>c;

    return 0;
}
