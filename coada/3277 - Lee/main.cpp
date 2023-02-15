#include <iostream>
#include <queue>
using namespace std;
#define inf 10000000
bool a[101][101];
int d[101][101][8],N;
pair<int,int> p[3];
const int di[]={-1,0,1,0};
const int dj[]={0,1,0,-1};
bool inside(int i,int j){
  return i>=1&&i<=N&&j>=1&&j<=N;
}
void lee(pair<int,int> s){
   queue<pair<int,int>> Q;
   Q.push(s);
   d[1][1][0]=0;
   pair<int,int> nod;
   int ok=0;
   while(!Q.empty()){
      nod=Q.front();
      Q.pop();
      ok=0;
      for(int i=0;i<3;i++)
        if(nod==p[i])
           ok=(1<<i);
      for(int k=0,ii,jj;k<4;k++){
          ii=nod.first + di[k];
          jj=nod.second + dj[k];
          if(inside(ii,jj)&&a[ii][jj]==1)
            continue;
          for(int i=0;i<8;i++)
            if(d[ii][jj][i|ok]>d[nod.first][nod.second][i]+1){
              d[ii][jj][i|ok]=d[nod.first][nod.second][i]+1;
              Q.push({ii,jj});
          }
      }
   }
}
int main()
{
    cin>>N;
    for(int i=1;i<=N;i++)
        for(int j=1;j<=N;j++){
           cin>>a[i][j];
           for(int k=0;k<8;k++)
              d[i][j][k]=inf;
    }
    for(int i=0;i<3;i++)
        cin>>p[i].first>>p[i].second;
    lee({1,1});
    cout<<d[N][N][7];
    return 0;
}
