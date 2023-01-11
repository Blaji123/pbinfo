#include <fstream>

using namespace std;
ifstream cin("combinari.in");
ofstream cout("combinari.out");
int n,p,x[16];
void afis(){
  for(int i=1;i<=p;i++)
    cout<<x[i]<<" ";
  cout<<endl;
}
void back(int k){
   for(int i=x[k-1]+1;i<=n;i++){
    x[k]=i;
    if(k==p)
        afis();
    else
        back(k+1);
   }
}
int main()
{
    cin>>n>>p;
    x[0]=0;
    back(1);
    return 0;
}
