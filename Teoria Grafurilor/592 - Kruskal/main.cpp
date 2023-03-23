#include <fstream>
#include <vector>
#include <algorithm>
using namespace std;
ifstream cin("kruskal.in");
ofstream cout("kruskal.out");
int rez,m;
vector<int> T(101);
struct poz{
  int i,j,c;
}M[101];
poz A[101];
bool cmp(poz a,poz b){
  return a.c<b.c;
}
int radacina(int a){
   if(T[a]==a) return a;
   else return T[a]=radacina(T[a]);
}
void leaga(int a,int b){
   T[a]=T[b];
}
void kruskal(){
  int r1,r2,cnt=0;
  for(int i=1;i<=m;i++){
    r1=radacina(M[i].i);
    r2=radacina(M[i].j);
    if(r1!=r2){
        rez+=M[i].c;
        A[++cnt]=M[i];
        leaga(r1,r2);
    }
  }
}
int main()
{
    int n,x,y,c;
    cin>>n>>m;
    for(int i=1;i<=m;i++){
        cin>>x>>y>>c;
        M[i].i=x;M[i].j=y;M[i].c=c;
    }
    sort(M,M+m+1,cmp);
    for(int i=1;i<=n;i++)
        T[i]=i;
    kruskal();
    cout<<rez<<endl;
    for(int i=1;i<n;i++)
        cout<<A[i].i<<" "<<A[i].j<<endl;
    return 0;
}
