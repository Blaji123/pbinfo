#include <fstream>
#include <queue>
using namespace std;
ifstream cin("dijkstra2.in");
ofstream cout("dijkstra2.out");
#define inf 0x3f3f3f3f
vector<pair<int,int>> G[100001];
vector<int> d(100001);
priority_queue<pair<int,int>, vector<pair<int,int>>,greater<pair<int,int>> > Q;
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
        int costnou=i.second;
        if(d[nodnou]>d[nod]+costnou){
            d[nodnou]=d[nod]+costnou;
            Q.push({d[nodnou],nodnou});
        }
    }
   }
}
int main()
{
    int n,m,p,x,y,c;
    cin>>n>>m>>p;
    for(int i=1;i<=m;i++){
        cin>>x>>y>>c;
        G[x].push_back({y,c});
        G[y].push_back({x,c});
    }
    for(int i=1;i<=n;i++)
        d[i]=inf;
    dijkstra(p);
    for(int i=1;i<=n;i++)
        if(d[i]==inf)
          cout<<-1<<" ";
        else
          cout<<d[i]<<" ";
    return 0;
}
