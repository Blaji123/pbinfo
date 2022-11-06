#include <iostream>

using namespace std;
bool prim(int n){
  if(n==0 || n==1) return 0;
  if(n%2==0&&n!=2) return 0;
  for(int d=3;d*d<=n;d++)
    if(n%d==0)
      return 0;
  return 1;
}
int Phi(int n){
    if(n==1)
        return 0;
    if(prim(n))
        return n-1;
    int rez=1,d=2;
    while(n>1)
    {
        int p = 0;
        while(n % d==0)
            n/=d , p++;
        if(p != 0)
            rez = rez * (d-1) * pow(d , p - 1);
        d++;
        if(d * d > n)
            d = n;
    }
    return rez;
}
int main()
{
    int n;
    cin>>n;
    cout<<Phi(n);
    return 0;
}
