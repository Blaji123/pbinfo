#include <fstream>
#include <algorithm>
#include <vector>
using namespace std;
ifstream cin("zapada.in");
ofstream cout("zapada.out");
int sum,m;
vector<int> T(101);
struct zapada{
  int i,j,c;
}M[5000];
bool cmp(zapada a,zapada b){
   return a.c<b.c;
}
void leaga(int a,int b){
  T[a]=T[b];
}
int radacina(int a){
  if(T[a]==a) return a;
  else T[a]=radacina(T[a]);
}
void kruskal(){
  int r1,r2;
  for(int i=1;i<=m;i++){
    r1=radacina(M[i].i);
    r2=radacina(M[i].j);
    if(r1!=r2){
        sum+=M[i].c;
        leaga(r1,r2);
    }
  }
}
int main()
{
    int n,x,y,c,k;
    cin>>n>>m;
    for(int i=1;i<=m;i++){
        cin>>x>>y>>c;
        M[i].i=x,M[i].j=y,M[i].c=c;
    }
    for(int i=1;i<=n;i++)
        T[i]=i;
    cin>>k;
    for(int i=1;i<=k;i++){
        cin>>x;
        sum+=M[x].c;
        int r1=radacina(M[x].i);
        int r2=radacina(M[x].j);
        leaga(r1,r2);
    }
    sort(M+1,M+m+1,cmp);
    kruskal();
    cout<<sum;
    return 0;
}
