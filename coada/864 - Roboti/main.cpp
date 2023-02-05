#include <fstream>

using namespace std;
ifstream cin("roboti.in");
ofstream cout("roboti.out");
const int di[]={-1, 0, 1, 0};
const int dj[]={0, 1, 0, -1};
int n,m, a[1002][1002],x[1000001] , y[1000001];
int istart,istop,jstart,jstop;
bool inside(int i,int j){
  return i>=1 && i<=n && j>=1 && j<=m;
}
int main()
{
    cin>>n>>m;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++)
          cin>>a[i][j];
    cin>>istart>>jstart>>istop>>jstop;
    int st=1,dr=1;
    a[istart][jstart]=1;
    x[1]=istart,y[1]=jstart;
    while(st<=dr&&a[istop][jstop]==0){
        int i=x[st],j=y[st];
        for(int k=0;k<4;k++){
            int ii=i+di[k];
            int jj=j+dj[k];
            if(inside(ii,jj)&&a[ii][jj]==0){
                dr++;
                x[dr]=ii;
                y[dr]=jj;
                a[ii][jj]=a[i][j]+1;
            }
        }
        st++;
    }
    cout<<a[istop][jstop]-1;
    return 0;
}
