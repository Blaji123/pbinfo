#include <iostream>

using namespace std;
int sum_div(int n){
  int s=1;
  for(int d=2;d<=n/2;d++)
    if(n%d==0)
       s+=d;
   s+=n;
  return s;
}
int main()
{
    int n;
    cin>>n;
    cout<<sum_div(n);
    return 0;
}
