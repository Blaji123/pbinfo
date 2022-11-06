#include <iostream>

using namespace std;
int maxi=-1,nr;
long long cifmax(int n){
  if(n==0&&nr==0)
    return 0;
  else if(n==0)
    return maxi;
  if(maxi<n%10)
  {
    maxi=n%10;
    nr++;
  }
  return cifmax(n/10);
}
int main()
{
    int n;
    cin>>n;
    cout<<cifmax(n);
    return 0;
}
