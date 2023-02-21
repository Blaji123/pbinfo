#include <fstream>
#include <vector>
#include <queue>
using namespace std;
ifstream cin("dmin.in");
ofstream cout("dmin.out");
vector<int> G[101];
int bfs(int start,int finish){
   queue<int> Q;
   int d[101]={0};
   bool v[101]={0};
   d[start]=0;
   v[start]=1;
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
}
int main()
{
    int n,m,x,y,k;
    cin>>n>>m;
    for(int i=1;i<=m;i++){
        cin>>x>>y;
        G[x].push_back(y);
        G[y].push_back(x);
    }
    cin>>k;
    for(int i=1;i<=k;i++){
        cin>>x>>y;
        cout<<bfs(x,y)<<endl;
    }
    return 0;
}
