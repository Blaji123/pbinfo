#include <fstream>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;
ifstream cin("BFS.in");
ofstream cout("BFS.out");
int n,m,X,x,y,v[101],d[101],T[101];
vector<int> G[101];
queue<int> Q;
void BFS(int x){
   v[x]=1,T[x]=0,d[x]=0;
   Q.push(x);
   while(!Q.empty()){
      int k=Q.front();
      Q.pop();
      for(auto i:G[k])
        if(!v[i])
      {
          v[i]=1;
          d[i]=d[x]+1;
          T[i]=x;
          Q.push(i);
      }
      cout<<k<<" ";
   }
}
int main()
{
    cin>>n>>m>>X;
    for(int i=1;i<=m;i++)
    {
        cin>>x>>y;
        G[x].push_back(y);
        G[y].push_back(x);
    }
    for(int i=1;i<=n;i++)
        sort(G[i].begin(),G[i].end());
    BFS(X);
    return 0;
}
