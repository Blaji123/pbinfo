#include <iostream>

using namespace std;
bool Egal(int n){
    int a[11],i=0;
   while(n!=0)
   {
       if(n%10%2==1)
        a[++i]=n%10;
       n/=10;
   }
   for(int j=1;j<i;j++)
    if(a[j]!=a[j+1])
       return 0;
   return 1;
}
int main()
{
    int n;
    cin>>n;
    cout<<Egal(n);
    return 0;
}
