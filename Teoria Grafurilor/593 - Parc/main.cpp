#include <fstream>
#include <queue>
using namespace std;
ifstream cin("parc.in");
ofstream cout("parc.out");
#define inf 0x3f3f3f3f
vector<pair<int,int>> G[101];
vector<int> d(101);
priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>> >Q;
void dijkstra(int start){
  d[start]=0;
  Q.push({0,start});
  while(!Q.empty()){
    int dist=Q.top().first;
    int nod=Q.top().second;
    Q.pop();
    if(dist>d[nod]) continue;
    for(auto i:G[nod]){
        int nodnou=i.first;
        int lungnou=i.second;
        if(d[nodnou]>d[nod]+lungnou){
            d[nodnou]=d[nod]+lungnou;
            Q.push({d[nodnou],nodnou});
        }
    }
  }
}
int main()
{
    int n,m,C,mini=inf,imini,x,y,L,P;
    cin>>n>>m>>C;
    for(int i=1;i<=m;i++){
        cin>>x>>y>>L;
        G[x].push_back({y,L});
        G[y].push_back({x,L});
    }
    for(int i=1;i<=n;i++)
        d[i]=inf;
    dijkstra(C);
    cin>>P;
    for(int i=1;i<=P;i++){
        cin>>x;
        if(d[x]<mini)
            mini=d[x],imini=x;
    }
    cout<<imini;
    return 0;
}
