#include <fstream>
#include <vector>
using namespace std;
ifstream cin("topsort.in");
ofstream cout("topsort.out");
vector<int> G[100001];
vector<bool> v(100001);
vector<int> S;
void dfs(int start){
  v[start]=1;
  for(auto i:G[start])
  if(!v[i])
    dfs(i);
  S.push_back(start);
}
int main()
{
    int n,m,x,y;
    cin>>n>>m;
    for(int i=1;i<=m;i++){
        cin>>x>>y;
        G[x].push_back(y);
    }
    for(int i=1;i<=n;i++)
     if(!v[i]){
       dfs(i);
    }
    for(int i=S.size()-1;i>=0;i--)
        cout<<S[i]<<" ";
    return 0;
}
