#include <iostream>

using namespace std;
double nreal(int x,int y){
   int a=y;
   int p=1;
   while(a)
   {
       p*=10;
       a/=10;
   }
   double c;
   c=p*x+y;
   c=(double) c/p;
   return c;
}
int main()
{
    int a,b;
    cin>>a>>b;
    cout<<nreal(a,b);
    return 0;
}
