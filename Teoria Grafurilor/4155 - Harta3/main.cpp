#include <fstream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iomanip>
using namespace std;
ifstream cin("harta3.in");
ofstream cout("harta3.out");
double rez;
int m;
pair<int,int> v[101];
vector<int> T(101);
struct harta{
  int i,j;
  double c;
}M[5001];
bool cmp(harta a,harta b){
   return a.c<b.c;
}
int radacina(int a){
   if(T[a]==a) return a;
   else return T[a]=radacina(T[a]);
}
int leaga(int a,int b){
  T[a]=T[b];
}
void kruskal(){
   int r1,r2;
   for(int i=1;i<=m;i++){
    r1=radacina(M[i].i);
    r2=radacina(M[i].j);
    if(r1!=r2){
        rez+=M[i].c;
        leaga(r1,r2);
    }
   }
}
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>v[i].first>>v[i].second;
    }
    for(int i=1;i<n;i++)
      for(int j=i+1;j<=n;j++){
      M[++m].i=i,M[m].j=j;
      M[m].c=sqrt((v[i].first-v[j].first)*(v[i].first-v[j].first)+(v[i].second-v[j].second)*(v[i].second-v[j].second));
    }
    sort(M+1,M+m+1,cmp);
    for(int i=1;i<=n;i++)
        T[i]=i;
    kruskal();
    cout<<fixed<<setprecision(4)<<rez;
    return 0;
}
