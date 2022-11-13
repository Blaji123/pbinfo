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
void afisare(int a,int b){
  if(a>b)
    swap(a,b);
  for(int i=a;i<=b;i++)
    if(is_prim(i))
      cout<<i<<" ";
}
int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
