#include <fstream>
#include <queue>
#include <vector>
using namespace std;
ifstream cin("distante.in");
ofstream cout("distante.out");
vector<int> G[1001];
int BFS(int start,int finish){
  bool v[1001]={0};
  int d[1001]={0};
  queue<int> Q;
  v[start]=1;
  d[start]=0;
  Q.push(start);
  while(!Q.empty()){
    int k=Q.front();
    Q.pop();
    if(k==finish)
        return d[k];
    for(auto i:G[k])
     if(!v[i]){
      v[i]=1;
      Q.push(i);
      d[i]=d[k]+1;
    }
  }
  return -1;
}
int main()
{
    int n,m,p,q,x,y;
    cin>>n>>m>>p>>q;
    for(int i=1;i<=m;i++){
        cin>>x>>y;
        G[x].push_back(y);
        G[y].push_back(x);
    }
    for(int r=1;r<=n;r++){
        if(BFS(r,p)==BFS(r,q)&&BFS(r,p)!=-1)
            cout<<r<<" ";
    }
    return 0;
}
