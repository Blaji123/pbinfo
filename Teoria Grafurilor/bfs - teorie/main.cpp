#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> G[101];
queue<int> Q;
bool v[101];
void bfs(int x){
   v[x]=1;
   Q.push(x);
   while(!Q.empty()){
      int k=Q.front();
      Q.pop();
      cout<<k<<" ";
      for(auto i:G[k])
        if(!v[i]){
          v[i]=x;
          Q.push(i);
      }
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
        sort(G[i].begin(),G[i].end()));
    bfs(X);
    return 0;
}
