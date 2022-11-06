#include <iostream>

using namespace std;
int maxi=10,nr;
long long cifmin(int n){
  if(n==0&&nr==0)
    return 0;
  else if(n==0)
    return maxi;
  if(maxi>n%10)
  {
    maxi=n%10;
    nr++;
  }
  return cifmin(n/10);
}
int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
