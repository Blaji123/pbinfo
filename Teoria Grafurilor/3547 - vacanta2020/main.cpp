#include <fstream>
#include <queue>
using namespace std;
ifstream cin("vacanta2020.in");
ofstream cout("vacanta2020.out");
#define inf 0x3f3f3f3f
int d[350001][11],k;
vector<pair<int,int>> G[35001];
priority_queue<pair<int,pair<int,int>>, vector<pair<int,pair<int,int>>>, greater<pair<int,pair<int,int>>> >Q;
void dijkstra(){
  d[1][0]=0;
  Q.push({0,{1,0}});
  while(!Q.empty()){
    int cost=Q.top().first;
    int nod=Q.top().second.first;
    int nr_tichete=Q.top().second.second;
    Q.pop();
    if(cost>d[nod][nr_tichete])
        continue;
    for(auto i:G[nod]){
        int nodnou=i.first;
        int costnou=i.second;
        if(d[nodnou][nr_tichete]>d[nod][nr_tichete]+costnou){
            d[nodnou][nr_tichete]=d[nod][nr_tichete]+costnou;
            Q.push({d[nodnou][nr_tichete],{nodnou,nr_tichete}});
        }
        if(nr_tichete<k)
         if(d[nodnou][nr_tichete+1]>d[nod][nr_tichete]){
            d[nodnou][nr_tichete+1]=d[nod][nr_tichete];
            Q.push({d[nodnou][nr_tichete+1],{nodnou,nr_tichete+1}});
         }
    }
  }
}
int main()
{
    int n,m,x,y,c;
    cin>>n>>m>>k;
    for(int i=1;i<=m;i++){
        cin>>x>>y>>c;
        G[x].push_back({y,c});
        G[y].push_back({x,c});
    }
    for(int i=1;i<=n;i++)
        for(int j=0;j<=k;j++)
          d[i][j]=inf;
    dijkstra();
    for(int i=1;i<=n;i++){
        int mini=inf;
        for(int j=0;j<=k;j++)
            mini=min(d[i][j],mini);
        cout<<mini<<" ";
    }
    return 0;
}
