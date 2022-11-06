#include <iostream>

using namespace std;
int concat(int a,int b){
  int bb=b,p=1;
  while(bb!=0)
  {
      p*=10;
      bb/=10;
  }
  int c=a*p+b;
  return c;
}
int main()
{
    int a,b;
    cin>>a>>b;
    cout<<concat(a,b);
    return 0;
}
