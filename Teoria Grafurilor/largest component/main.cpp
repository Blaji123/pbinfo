#include <iostream>
#include <vector>
using namespace std;
vector<int> G[101];
bool v[101];
int cnt;
void dfs(int x){
   v[x]=1;
   cnt++;
   for(auto i:G[x])
   if(!v[i]){
      dfs(i);
   }
}
int main()
{
    int n,x,y,maxi=0;
    cin>>n;
    while(cin>>x>>y){
        G[x].push_back(y);
        G[y].push_back(x);
    }
    for(int i=1;i<=n;i++)
        if(!v[i]){
          cnt=0;
          dfs(i);
          maxi=max(maxi,cnt);
        }
    cout<<maxi;
    return 0;
}
