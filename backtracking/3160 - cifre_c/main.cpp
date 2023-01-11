#include <iostream>
#include <algorithm>
using namespace std;
int n,c,x[11],v[10],nr;
void afis(){
   for(int i=1;i<=c;i++)
      cout<<x[v[i]];
   cout<<'\n';
}
void back(int k){
  for(int i=nr;i>=v[k-1]+1;i--){
    v[k]=i;
    if(k==1&&x[i]==0);
    else
    if(k==c)
        afis();
    else
        back(k+1);
  }
}
int main()
{
    cin>>n>>c;
    while(n){
        x[++nr]=n%10;
        n/=10;
    }
    sort(x+1,x+nr+1);
    back(1);
    return 0;
}
