#include <fstream>
#include <queue>
using namespace std;
ifstream cin("soarece2.in");
ofstream cout("soarece2.out");
queue<int> X,Y;
const int di[]={-1,0,1,0};
const int dj[]={0,1,0,-1};
int a[1002][1002],rez[10001],m,n,istop,jstop;
char v[1002][1002];
bool inside(int i,int j){
   return i>=1&&i<=n&&j>=1&&j<=m;
}
void lee(int istart,int jstart){
    int i,j,ii,jj;
    a[istart][jstart]=1;
    X.push(istart);
    Y.push(jstart);
    while(!X.empty()){
        i=X.front(),j=Y.front();
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
    int istart,jstart,p=1;
    cin>>n>>m;
    for(int i=1;i<=n;i++)
      for(int j=1;j<=m;j++){
         cin>>v[i][j];
         if(v[i][j]=='_')
            a[i][j]=0;
         else if(v[i][j]=='#')
            a[i][j]=-1;
         else if(v[i][j]=='S')
            istart=i,jstart=j,a[i][j]=0;
         else if(v[i][j]=='B')
            istop=i,jstop=j,a[i][j]=0;
    }
    lee(istart,jstart);
    if(a[istop][jstop]==-1)
        cout<< 0;
    else{
        cout<<a[istop][jstop]-1<<endl;
        int i=istop,j=jstop;
        while(i!=istart || j!=jstart){
            if(a[i-1][j]==a[i][j]-1&&inside(i-1,j))
                i--,rez[p++]=1;
            if(a[i+1][j]==a[i][j]-1&&inside(i+1,j))
                i++,rez[p++]=3;
            if(a[i][j+1]==a[i][j]-1&&inside(i,j+1))
                j++,rez[p++]=2;
            if(a[i][j-1]==a[i][j]-1&&inside(i,j-1))
                j--,rez[p++]=4;
        }
    }
    for(int i=p-1;i>=1;i--){
        if(rez[i]==1)
           cout<<'S';
        else if(rez[i]==2)
            cout<<'V';
        else if(rez[i]==3)
            cout<<'N';
        else if(rez[i]==4)
            cout<<'E';
    }
    return 0;
}
