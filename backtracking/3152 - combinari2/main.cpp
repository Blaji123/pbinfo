#include <iostream>

using namespace std;
int n,p,x[16];
void afis(){
  for(int i=1;i<=p;i++)
    cout<<x[i]<<" ";
  cout<<endl;
}
int ok(int k)
{
    if(x[k] % 2 == 0 && x[k - 1] % 2 == 0) return 0;
    else return 1;
}
void back(int k){
   for(int i=x[k-1]+1;i<=n;i++){
    x[k]=i;
    if(ok(k)||k==1)
        if(k==p)
            afis();
        else
            back(k+1);
   }
}
int main()
{
    cin>>n>>p;
    back(1);
    return 0;
}
