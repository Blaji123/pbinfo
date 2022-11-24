#include <iostream>

using namespace std;
bool is_prim(int n){
  if(n==1 || n==0) return 0;
  if(n!=2 && n%2==0) return 0;
  for(int d=3;d*d<=n;d++)
     if(n%d==0)
        return 0;
  return 1;
}
void P(int x[],int n,int &s){
    s=0;
   for(int i=0;i<n;i++)
      if(is_prim(x[i]))
        s+=x[i];
}
int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
