#include <fstream>

using namespace std;
ifstream cin("aranjamente.in");
ofstream cout("aranjamente.out");
int n,p,x[10],uz[10];
void afis(int k){
   for(int i=1;i<=k;i++)
      cout<<x[i]<<" ";
   cout<<endl;
}
void back(int k){
  for(int i=1;i<=n;i++)
    if(uz[i]==0)
  {
      x[k]=i;
      uz[i]=1;
      if(k==p)
        afis(k);
      else
        back(k+1);
      uz[i]=0;
  }
}
int main()
{
    cin>>n>>p;
    back(1);
    return 0;
}
