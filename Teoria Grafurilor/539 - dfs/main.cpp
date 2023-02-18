#include <fstream>
#include <vector>
#include <algorithm>
using namespace std;
ifstream cin("dfs.in");
ofstream cout("dfs.out");
bool v[101];
vector<int> G[101];
void dfs(int x){
   cout<<x<<" ";
   v[x]=1;
   for(auto i:G[x])
     if(!v[i]){
        v[i]=1;
        dfs(i);
     }
}
int main()
{
    int n,m,X,x,y;
    cin>>n>>m>>X;
    for(int i=1;i<=m;i++){
        cin>>x>>y;
        G[x].push_back(y);
        G[y].push_back(x);
    }
    for(int i=1;i<=n;i++)
        sort(G[i].begin(),G[i].end());
    dfs(X);
    return 0;
}
