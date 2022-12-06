#include <fstream>
#include <vector>
using namespace std;
ifstream cin("veriflant.in");
ofstream cout("veriflant.out");
vector<int> v[101];
int x,y,n,m,k,p,L[201];
int verif(int k,int L[]){
   for(int i=1;i<k;i++){
    int ok=0;
    for(auto x:v[L[i]])
        if(x==L[i+1])
            ok=1;
    if(ok==0)
        return 0;
   }
   int f[101]={0};
   for(int i=1;i<=k;i++)
      f[L[i]]++;
   for(int i=1;i<=n;i++)
      if(f[i]>1) return 2;
    return 1;
}
int main()
{
    cin>>n>>m;
    for(int i=1;i<=m;i++)
    {
        cin>>x>>y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    cin>>k;
    for(int i=1;i<=k;i++){
        cin>>p;
        for(int j=1;j<=p;j++)
            cin>>L[j];
        if(verif(p,L)==0) cout<<"NU"<<endl;
        else if(verif(p,L)==1) cout<<"ELEMENTAR"<<endl;
        else cout<<"NEELEMENTAR"<<endl;
    }
    return 0;
}
