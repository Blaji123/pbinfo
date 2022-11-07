#include <iostream>

using namespace std;
int sumfactcif(int n){
  if(n==0)
     return 1;
  int s=0;
  while(n!=0){
    int p=1;
    int c=n%10;
    for(int i=1;i<=c;i++)
        p*=i;
    s+=p;
    n/=10;
  }
  return s;
}
int main()
{
    int n;
    cin>>n;
    cout<<sumfactcif(n);
    return 0;
}
