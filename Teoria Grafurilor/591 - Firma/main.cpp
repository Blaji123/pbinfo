#include <fstream>
#include <queue>
using namespace std;
ifstream cin("firma.in");
ofstream cout("firma.out");
#define inf 0x3f3f3f3f
vector<pair<int,int>> G[101];
vector<int> d(101);
int n;
void initialise(){
  for(int i=1;i<=n;i++)
    d[i]=inf;
}
void dijkstra(int start){
   priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>> > Q;
   d[start]=0;
   Q.push({0,start});
   while(!Q.empty()){
    int lung=Q.top().first;
    int nod=Q.top().second;
    Q.pop();
    if(lung>d[nod]) continue;
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
    int m,x,y,L,mini=inf,imini;
    cin>>n>>m;
    for(int i=1;i<=m;i++){
        cin>>x>>y>>L;
        G[x].push_back({y,L});
        G[y].push_back({x,L});
    }
    for(int i=1;i<=n;i++){
       initialise();
       dijkstra(i);
       int suma=0;
       for(int j=1;j<=n;j++)
          suma+=d[j];
       if(suma<mini)
          mini=suma,imini=i;
    }
    cout<<imini;
    return 0;
}
