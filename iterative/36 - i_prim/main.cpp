#include <iostream>

using namespace std;
bool prim(int n){
   if(n==1 || n==0) return 0;
   if(n!=2 && n%2==0) return 0;
   for(int d=3;d*d<=n;d++)
       if(n%d==0)
         return 0;
   return 1;
}
int i_prim(int n){
  int x=n,y=n;
  bool Gata=1,Gata1=1;
  while(Gata || Gata1)
  {
      if(prim(x))
        Gata=0;
      else
        x--;
      if(prim(y))
        Gata1=0;
      else
        y++;
  }
  return y-x;
}
int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
