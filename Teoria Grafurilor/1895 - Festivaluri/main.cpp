#include <fstream>
#include <queue>
#include <algorithm>
using namespace std;
ifstream cin("festivaluri.in");
ofstream cout("festivaluri.out");
#define inf 0x3f3f3f3f
vector<int> d(101,inf);
vector<int> fest(101);
vector<pair<int,int>> G[101];
priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>> >Q;
void dijkstra(int start){
    d[start]=0;
    Q.push({0,start});
    while(!Q.empty()){
       int cost=Q.top().first;
       int nod=Q.top().second;
       Q.pop();
       if(cost>d[nod]) continue;
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
    int n,m,p,z,r,x,y,c,cnt=0;
    cin>>n>>m>>p>>z>>r;
    for(int i=1;i<=m;i++){
        cin>>x>>y>>c;
        G[x].push_back({y,c});
    }
    dijkstra(z);
    for(int i=1;i<=r;i++){
        cin>>x;
        fest[x]=d[x];
    }
    sort(fest.begin(),fest.end());
    for(int i = 1 ; i <= n ; i++)
        if(fest[i] > 0)
        {
            if(sum + fest[i] < p) sum += fest[i] , cnt++;
            else break;
        }
    cout<<cnt;
    return 0;
}
