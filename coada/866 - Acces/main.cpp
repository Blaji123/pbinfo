#include <fstream>
#include <queue>
using namespace std;
ifstream cin("acces.in");
ofstream cout("acces.out");
int a[1001][1001],m,n;
const int di[]={-1,0,1,0};
const int dj[]={0,1,0,-1};
queue<int> X,Y;
bool inside(int i,int j){
  return i>=1&&i<=n&&j>=1&&j<=m;
}
void lee(int istart,int jstart){
   int i,j,ii,jj;
   a[istart][jstart]=1;
   X.push(istart);
   Y.push(jstart);
   while(!X.empty()){
       i=X.front();
       j=Y.front();
       for(int k=0;k<4;k++){
        ii=i+di[k];
        jj=j+dj[k];
       if(inside(ii,jj)&&a[ii][jj]==0)
           X.push(ii),Y.push(jj),a[ii][jj]=a[i][j]+1;
       }
       X.pop(),Y.pop();
   }
}
int main()
{
    char v[1001][1001];
    int istart,jstart;
    cin>>n>>m;
    for(int i=1;i<=n;i++)
       for(int j=1;j<=m;j++){
           cin>>v[i][j];
           if(v[i][j]=='-')
                a[i][j]=0;
           else if(v[i][j]=='P')
               istart=i,jstart=j,a[i][j]=0;
           else
               a[i][j]=1;
    }
    lee(istart,jstart);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++)
        {
           if(a[i][j]==1&&(i!=istart||j!=jstart))
                cout<<-1<<" ";
           else
                cout<<a[i][j]-1<<" ";
        }
        cout<<endl;
    }
    return 0;
}
