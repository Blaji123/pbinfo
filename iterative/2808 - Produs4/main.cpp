#include <iostream>

using namespace std;
void produs(int a,int &k){
  int prod=1;
  k=1;
  while(prod<=a){
    prod*=k;
    k+=2;
  }
  k-=4;
}
int main()
{
    int a,k;
    cin>>a;
    produs(a,k);
    cout<<k;
    return 0;
}
