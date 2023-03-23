#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int m;
vector<int> T(101);
struct kruskal1{
   int i,j,c;
}M[101];
bool cmp(kruskal1 a,kruskal1 b){
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
   int r1,r2;
   for(int i=1;i<=m;i++){
       r1=radacina(M[i].i);
       r2=radacina(M[i].j);
       if(r1!=r2){
        //...
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
    sort(M+1,M+m+1,cmp);
    for(int i=1;i<=n;i++)
        T[i]=i;
    kruskal();
    return 0;
}
