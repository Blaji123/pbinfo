#include <iostream>

using namespace std;
int nr_cif_zero(int n){
    int nr=0;
    if(n==0)
        nr++;
  while(n)
  {
      if(n%10==0)
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
