#include <iostream>

using namespace std;
int suma(int a,int b){
  if(a>b)
    swap(a,b);
  int suma=1;
  for(int d=2;d<=a;d++)
    if(a%d==0 && b%d==0)
        suma+=d;
   return suma;
}
int main()
{
    int a,b;
    cin>>a>>b;
    cout<<suma(a,b);
    return 0;
}
