#include <iostream>
#include <cmath>
using namespace std;
void perm(int &n){
  int nr_cifre=(int)log10(n);
  int prima_cifra=n/pow(10,nr_cifre);
  int p=pow(10,nr_cifre);
  n%=p;
  n=n*10+prima_cifra;
}
int main()
{
    int n;
    cin>>n;
    perm(n);
    cout<<n<<" ";
    return 0;
}
