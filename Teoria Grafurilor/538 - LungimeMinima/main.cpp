#include <fstream>
#include <vector>
#include <queue>
using namespace std;
ifstream cin("lungimeminima.in");
ofstream cout("lungimeminima.out");
vector<int> G[101];
queue<int> Q;
bool v[101];
int d[101],L,n,p,cnt;
int bfs(int x){
  v[x]=1,d[x]=1;
  Q.push(x);
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
    int x,y;
    cin>>n>>p>>L;
    while(cin>>x>>y){
        G[x].push_back(y);
        G[y].push_back(x);
    }
    bfs(p);
    for(int i=1;i<=n;i++)
        if(d[i]==L+1){
           cnt++;
    }
    cout<<cnt<<endl;
    for(int i=1;i<=n;i++)
        if(d[i]==L+1)
          cout<<i<<" ";
    return 0;
}
