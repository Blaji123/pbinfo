#include <iostream>

using namespace std;
int norocoase(int a,int b){
  if(a%2==0)
    a++;
   int nr=0;
  for(int i=a;i<=b;i+=2)
    nr++;
  return nr;
}
int main()
{
    int a,b;
    cin>>a>>b;
    cout<<norocoase(a,b);
    return 0;
}
