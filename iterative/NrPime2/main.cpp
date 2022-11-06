#include <iostream>

using namespace std;
bool is_prim(int n){
  if(n==0 || n==1) return 0;
  if(n!=2 && n%2==0) return 0;
  for(int d=3;d*d<=n;d++)
    if(n%d==0)
      return 0;
  return 1;
}
int NrPrime(int n){
    int nr=0;
  while(n){
    if(is_prim(n%10))
        nr++;
    n/=10;
  }
  return nr;
}
int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
