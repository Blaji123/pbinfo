#include <iostream>
#include <vector>
using namespace std;
vector<int> G[101];
bool v[101];
void dfs(int x){
   v[x]=1;
   for(auto i:G[x])
     if(!v[i]){
       dfs(i);
   }
}
int main()
{
    int n,m,x,y,cnt=0;
    cin>>n>>m;
    for(int i=1;i<=m;i++){
        cin>>x>>y;
        G[x].push_back(y);
        G[y].push_back(x);
    }
    for(int i=1;i<=n;i++)
        if(!v[i])
           dfs(i),cnt++;
    cout<<cnt;
    return 0;
}
