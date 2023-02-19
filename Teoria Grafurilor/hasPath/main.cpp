#include <iostream>
#include <vector>
using namespace std;
bool v[101];
vector<int> G[101];
bool dfs(int src,int dst){
  if(src==dst)
    return true;
  v[src]=1;
  for(auto i:G[src])
   if(!v[i]){
    v[i]=1;
    if(dfs(i,dst))
        return true;
   }
   return false;
}
int main()
{
    int n,m,p,q,x,y;
    cin>>n>>m;
    for(int i=1;i<=m;i++){
        cin>>x>>y;
        G[x].push_back(y);
    }
    cin>>p>>q;
    cout<<dfs(p,q);
    return 0;
}
