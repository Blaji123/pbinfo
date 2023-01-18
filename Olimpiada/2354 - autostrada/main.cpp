#include <fstream>
#include <queue>
using namespace std;
ifstream cin("autostrada.in");
ofstream cout("autostrada.out");
int a[51][51],N,M,st[1001],dr[1001],l;
bool BFS(){
    int P[100]={0};
    queue<int> Q;
    Q.push(1);
    P[1]=1;
    int cnt=1;
    while(!Q.empty()){
        int x=Q.front();
        for(int j=1;j<=N;j++)
            if(a[x][j]==1&&!P[j])
                 P[j]=1,Q.push(j),cnt++;
        Q.pop();
    }
    return cnt==N;
}
int main()
{
    int x,y;
    cin>>N>>M;
    for(int i=1;i<=M;i++){
        cin>>x>>y;
        a[x][y]=a[y][x]=1;
    }
    for(int i=1;i<N;i++)
        for(int j=i+1;j<=N;j++)
           if(a[i][j]==1){
        a[i][j]=a[j][i]=0;
        if(!BFS())
            st[++l]=i,dr[l]=j;
        a[i][j]=a[j][i]=1;
    }
    cout<<l<<endl;
    for(int i=1;i<=l;i++)
        cout<<st[i]<<" "<<dr[i]<<endl;
    return 0;
}
