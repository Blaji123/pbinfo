#include <iostream>

using namespace std;
int Fibo(int n){
    if(n==1 || n==2) return 1;
   int a=1,b=1,nr=2,c;
   while(nr<n){
    c=a+b;
    if(c%2==1)
        nr++;
    a=b;
    b=c;
   }
   return c;
}
int main()
{
    int n;
    cin>>n;
    cout<<Fibo(n);
    return 0;
}
