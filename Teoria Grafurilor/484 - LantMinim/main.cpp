#include <fstream>
#include <vector>
#include <queue>
using namespace std;
ifstream cin("lantminim.in");
ofstream cout("lantminim.out");
vector<int> G[101];
queue<int> Q;
bool v[101];
int T[101];
void bfs(int x){
  v[x]=1;T[x]=0;
  Q.push(x);
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
    int n,p,q,cnt=0,rez[101],x,y;
    cin>>n>>p>>q;
    while(cin>>x>>y){
        G[x].push_back(y);
        G[y].push_back(x);
    }
    bfs(q);
    int aux=p;
    while(aux!=q){
        rez[++cnt]=aux;
        aux=T[aux];
    }
    rez[++cnt]=aux;
    cout<<cnt<<endl;
    for(int i=1;i<=cnt;i++)
        cout<<rez[i]<<" ";
    return 0;
}
