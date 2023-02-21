#include <iostream>
#include <vector>
#include <queue>
using namespace std;
vector<int> G[101];
queue<int> Q;
bool v[101];
int T[101];
int bfs(int x,int finish){
   v[x]=1;
   Q.push(x);
   T[x]=0;
   while(!Q.empty()){
      int k=Q.front();
      if(k==finish)
        return T[k];
      Q.pop();
      for(auto i:G[k])
        if(!v[i]){
        v[i]=1;
        Q.push(i);
        T[i]=T[k]+1;
      }
   }
   return -1;
}
int main()
{
    int n,m,x,y,p,q;
    cin>>n>>m;
    for(int i=1;i<=m;i++){
        cin>>x>>y;
        G[x].push_back(y);
        G[y].push_back(x);
    }
    cin>>p>>q;
    cout<<bfs(p,q);
    return 0;
}
