#include <iostream>

using namespace std;
void cmmdc(int a,int b,int &r){
  if(a==b)
    r=a;
  else
    if(a<b)
      cmmdc(a,b-a,r);
  else
      cmmdc(a-b,b,r);
}
int main()
{
    int a,b,r;
    cin>>a>>b;
    cmmdc(a,b,r);
    cout<<r;
    return 0;
}
