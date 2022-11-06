#include <iostream>

using namespace std;
int cmmmc(int a,int b){
  int aa=a,bb=b;
  while(b){
    int r=a%b;
    a=b;
    b=r;
  }
  return aa*bb/a;
}
int resturi(int n,int x,int y,int r){
    int val=cmmmc(x,y);
    n-=r;
    return n/val + 1;
}
int main()
{
    int n,x,y,r;
    cin>>n>>x>>y>>r;
    cout<<resturi(n,x,y,r);
    return 0;
}
