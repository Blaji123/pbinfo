#include <iostream>

using namespace std;
void sum_div(int n,int &sDiv){
    sDiv=1;
   for(int d=2;d*d<=n;d++)
      if(n%d==0)
   {
       sDiv+=d;
       if(d*d<n)
          sDiv+=n/d;
   }
   sDiv+=n;
}
int main()
{
    int n,sDiv;
    cin>>n;
    sum_div(n,sDiv);
    cout<<sDiv;
    return 0;
}
