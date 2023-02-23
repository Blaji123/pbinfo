#include <iostream>
#include <queue>
using namespace std;
#define inf 0x3f3f3f3f
vector<pair<int,int>> G[101];
vector<int> d(101);
priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>> > Q;
void Dijkstra(int start){
  d[start]=0;
  Q.push({0,start});
  while(!Q.empty()){
    int dist=Q.top().first;
    int nod=Q.top().second;
    Q.pop();
    if(dist>d[nod]) continue;
    for(auto i:G[nod])
      {
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
    int n,x,y,c,p;
    cin>>n>>p;
    while(cin>>x>>y>>c)
     G[x].push_back({y,c});
    for(int i=1;i<=n;i++)
        d[i]=inf;
    Dijkstra(p);
    for(int i=1;i<=n;i++)
        if(d[i]==inf)
            cout<<-1<<" ";
        else
            cout<<d[i]<<" ";
    return 0;
}
