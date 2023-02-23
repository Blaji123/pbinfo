#include <fstream>
#include <queue>
#include <vector>
using namespace std;
ifstream cin("epidemie.in");
ofstream cout("epidemie.out");
queue<int> Q;
vector<int> G[1001];
vector<bool> v(1001);
vector<int> d(1001);
void BFS(){
  while(!Q.empty()){
    int k=Q.front();
    Q.pop();
    for(auto i:G[k])
        if(!v[i]){
        Q.push(i);
        v[i]=1;
        d[i]=d[k]+1;
    }
  }
}
int main()
{
    int n,m,x,y,k,maxi=0;
    cin>>n>>m;
    for(int i=1;i<=m;i++){
        cin>>x>>y;
        G[x].push_back(y);
        G[y].push_back(x);
    }
    cin>>k;
    for(int i=1;i<=k;i++){
        cin>>x;
        v[x]=1;
        d[x]=1;
        Q.push(x);
    }
    BFS();
    for(int i=1;i<=n;i++)
        maxi=max(d[i],maxi);
    cout<<maxi;
    return 0;
}
