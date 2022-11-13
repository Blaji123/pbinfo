#include <iostream>

using namespace std;
void nr_div_imp(int n,int &nr){
    nr=1;
   for(int d=2;d*d<=n;d++)
     if(n%d==0)
   {
       if(d%2==1)
          nr++;
       if(d*d<n && (n/d)%2==1)
           nr++;
   }
   if(n%2==1)
      nr++;
}
int main()
{
    int n,nr;
    cin>>n;
    nr_div_imp(n,nr);
    cout<<nr;
    return 0;
}
