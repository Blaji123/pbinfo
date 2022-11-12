#include <iostream>

using namespace std;
void sub(int n,int k){
  for(int d=n*k;d>=k;d-=k)
    cout<<d<<" ";
}
int main()
{
    int n,k;
    cin>>n>>k;
    sub(n,k);
    return 0;
}
