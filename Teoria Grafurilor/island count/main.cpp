#include <iostream>
#include <queue>
using namespace std;
int a[101][101];
queue<int> X;
queue<int> Y;
const int di[]={-1,0,1,0};
const int dj[]={0,1,0,-1};
int n,m;
bool inside(int i,int j){
  return i>=0&&i<n&&j>=0&&j<m;
}
void lee(int istart,int jstart){
    int i,j,ii,jj;
    a[istart][jstart]=0;
    X.push(istart);
    Y.push(jstart);
    while(!X.empty()){
        i=X.front(),j=Y.front();
        X.pop(),Y.pop();
        for(int k=0;k<4;k++){
            ii=i+di[k];
            jj=j+dj[k];
            if(a[ii][jj]==1&&inside(ii,jj)){
                X.push(ii),Y.push(jj);
                a[ii][jj]=0;
            }
        }
    }
}
int main()
{
    int cnt;
    string s;
    cin>>n>>m;
    for(int i=0;i<n;i++)
      for(int j=0;j<m;j++){
        cin>>s;
        if(s=="L")
          a[i][j]=1;
        else if(s=="W")
          a[i][j]=0;
    }
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
          if(a[i][j])
            lee(i,j),cnt++;
    cout<<cnt;
    return 0;
}
