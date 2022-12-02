#include <fstream>
#include <queue>
using namespace std;
ifstream cin("bipartit1mare.in");
ofstream cout("bipartit1mare.out");
int v[101],a[101][101],p[101],x,y,n,m;
queue<int> Q;
void BFS(int x){
   v[x]=1;
   Q.push(x);
   while(!Q.empty()){
    int k=Q.front();
    Q.pop();
    p[k]=true;
    for(int i=1;i<=n;i++)
        if(!p[i]&&a[k][i])
    {
        v[i]=-v[k];
        Q.push(i);
    }
   }
}
int ver(){
    int ok=1;
    for(int i=1;i<=n&&ok;i++)
        for(int j=i+1;j<=n;j++)
              if(v[i]==v[j]&&a[i][j])
                 ok=0;
    if(ok)
        return 1;
    return 0;
}
int main()
{
    cin>>n>>m;
    for(int i=1;i<=m;i++){
        cin>>x>>y;
        a[x][y]=1;
        a[y][x]=1;
    }
    for(int i=1;i<=n;i++)
        if(!p[i])
           BFS(i);
    if(ver()){
        cout<<"DA"<<endl;
        for(int i=1;i<=n;i++)
            if(v[i]==1)
              cout<<i<<" ";
        cout<<endl;
        for(int i=1;i<=n;i++)
            if(v[i]==-1)
            cout<<i<<" ";
        cout<<endl;
    }
    else
        cout<<"NU";
    return 0;
}
