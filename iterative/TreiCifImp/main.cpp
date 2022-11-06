#include <iostream>

using namespace std;
bool TreiCifImp(int n){
    int nr=0;
  while(n!=0)
  {
      if(n%10%2==1)
        nr++;
      if(n%10%2==0&&nr>=3)
        return 1;
      if(n%10%2==0&&nr<3)
        nr=0;
      n/=10;
  }
  if(nr>=3)
    return 1;
  return 0;
}
int main()
{
    int n;
    cin>>n;
    cout<<TreiCifImp(n);
    return 0;
}
