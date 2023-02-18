#include <iostream>
#include <vector>
#include <stack>
using namespace std;
bool v[101];
vector<int> G[101];
stack<int> S;
void dfs(int x){
   v[x]=1;
   S.push(x);
   while(!S.empty()){
     int k=S.top();
     cout<<k<<" ";
     S.pop();
     for(auto i:G[k])
       if(!v[i]){
        v[i]=1;
        S.push(i);
       }
   }
}
int main()
{
    int n,m,X,x,y;
    cin>>n>>m>>X;
    for(int i=1;i<=m;i++){
        cin>>x>>y;
        G[x].push_back(y);
        G[y].push_back(x);
    }
    dfs(X);
    return 0;
}
