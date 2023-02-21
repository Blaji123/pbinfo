#include <fstream>
#include <queue>
#include <vector>
using namespace std;
ifstream cin("dmax.in");
ofstream cout("dmax.out");
vector<int> G[101];
queue<int> Q;
bool v[101];
int d[101];
void bfs(int start){
  v[start]=1;
  Q.push(start);
  d[start]=0;
  while(!Q.empty()){
    int k=Q.front();
    Q.pop();
    for(auto i:G[k])
        if(!v[i]){
        v[i]=1;
        Q.push(i);
        d[i]=d[k]+1;
    }
  }
}
int main()
{
    int n,m,x,y,maxi=0,imaxi;
    cin>>n>>m;
    for(int i=1;i<=m;i++){
        cin>>x>>y;
        G[x].push_back(y);
        G[y].push_back(x);
    }
    bfs(1);
    for(int i=1;i<=n;i++)
     if(d[i]>maxi){
      maxi=d[i];
      imaxi=i;
    }
    cout<<imaxi;
    return 0;
}
