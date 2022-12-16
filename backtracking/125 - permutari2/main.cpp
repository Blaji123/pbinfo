#include <fstream>
#include <algorithm>
using namespace std;
ifstream cin("permutari2.in");
ofstream cout("permutari2.out");
int n,a[10],x[10],p[10];
void afisare(){
   for(int i=1;i<=n;i++)
      cout<<a[x[i]]<<" ";
   cout<<endl;
}
void back(int k){
  for(int i=1;i<=n;i++)
  if(!p[i]){
    x[k]=i;
    p[i]=1;
    if(k==n)
        afisare();
    else
        back(k+1);
    p[i]=0;
  }
}
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    sort(a+1,a+n+1);
    back(1);
    return 0;
}
