#include <iostream>

using namespace std;
priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>> > Q;
void prim(int start){
  V[start]=1,T[start]=0,D[start]=0;
  Q.push({0,start});
  while(!Q.empty()){

  }
}
int main()
{
    cin>>n>>m;
    for(int i=1;i<=m;i++){
        G[x].push_back({c,y});
        G[y].push_back({c,x});
    }
    prim(1);
    return 0;
}
