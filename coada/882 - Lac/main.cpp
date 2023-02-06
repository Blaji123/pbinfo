#include <fstream>
#include <queue>
using namespace std;
ifstream cin("lac.in");
ofstream cout("lac.out");
const int di[]={-1,0,1,0};
const int dj[]={0,1,0,-1};
queue<int> X,Y;
int a[1001][1001],m,n;
bool inside(int i,int j){
  return i>=1&&i<=n&&j>=1&&j<=m;
}
void lee(int istart,int jstart){
   int i,j,ii,jj;
   a[istart][jstart]=2;
   X.push(istart);
   Y.push(jstart);
   while(!X.empty()){
      i=X.front();
      j=Y.front();
      for(int k=0;k<4;k++){
          ii=i+di[k];
          jj=j+dj[k];
          if(inside(ii,jj)&&a[ii][jj]==1){
            X.push(ii);
            Y.push(jj);
            a[ii][jj]=2;
          }
      }
      X.pop(),Y.pop();
   }
}
int main()
{
    int p=0,k=0;
    cin>>n>>m;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++)
           cin>>a[i][j];
    for(int i=1;i<=n;i++){
        if(a[i][1]==1)
            p++,lee(i,1);
        if(a[i][m]==1)
            p++,lee(i,m);
    }
    for(int i=1;i<=m;i++){
        if(a[1][i]==1)
            p++,lee(1,i);
        if(a[n][i]==1)
            p++,lee(n,i);
    }
    for(int i=2;i<n;i++)
        for(int j=2;j<m;j++)
         if(a[i][j]==1){
         k++;
         lee(i,j);
    }
    cout<<k<<" "<<p;
    return 0;
}
