#include <fstream>
#include <vector>
#include <queue>
using namespace std;
ifstream cin("lant1.in");
ofstream cout("lant1.out");
vector<int> G[101];
queue<int> Q;
bool v[101];
int T[101];
void bfs(int start){
   v[start]=1,T[start]=0;
   Q.push(start);
   while(!Q.empty()){
     int k=Q.front();
     Q.pop();
     for(auto i:G[k])
      if(!v[i]){
      v[i]=1;
      Q.push(i);
      T[i]=k;
     }
   }
}
int main()
{
    int n,p,q,r,x,y,rez[101],cnt=0;
    cin>>n>>p>>q>>r;
    while(cin>>x>>y){
        G[x].push_back(y);
        G[y].push_back(x);
    }
    bfs(r);
    int aux=p;
    while(aux!=r){
        rez[++cnt]=aux;
        aux=T[aux];
    }
    for(int i=0;i<=n;i++)
        v[i]=0;
    bfs(q);
    aux=r;
    while(aux!=q){
        rez[++cnt]=aux;
        aux=T[aux];
    }
    rez[++cnt]=q;
    cout<<cnt<<endl;
    for(int i=1;i<=cnt;i++)
        cout<<rez[i]<<" ";
    return 0;
}
