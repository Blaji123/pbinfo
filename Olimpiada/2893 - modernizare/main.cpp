#include <fstream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;
ifstream cin("modernizare.in");
ofstream cout("modernizare.out");
#define inf 1000000000000000001;
long long d[100001];
long long N,M,F;
vector<vector<pair<long long, long long>>> G(100001);
struct muchie{
  long long i,j,c;
}m[100001];
bool comp(muchie a, muchie b){
    if(min(d[a.i], d[a.j]) != min(d[b.i], d[b.j]))
        return min(d[a.i], d[a.j]) < min(d[b.i], d[b.j]);
    if(max(d[a.i], d[a.j]) != max(d[b.i], d[b.j]))
        return max(d[a.i], d[a.j]) < max(d[b.i], d[b.j]);
    return a.c < b.c;
}
void BFS(){
   d[1]=0;
   for(int i=2;i<=N;i++)
      d[i]=inf;
   queue<int> Q;
   Q.push(1);
   while(!Q.empty()){
     int nod=Q.front();
     for(auto x:G[nod])
        if(d[x.first]>d[nod]+1)
             d[x.first]=d[nod]+1,Q.push(x.first);
      Q.pop();
   }
}
int main()
{
    cin>>N>>M>>F;
    for(int i=1;i<=M;i++){
        cin>>m[i].i>>m[i].j>>m[i].c;
        G[m[i].i].push_back(make_pair(m[i].j, m[i].c));
        G[m[i].j].push_back(make_pair(m[i].i, m[i].c));
    }
    BFS();
    sort(m+1,m+M+1,comp);
    int k=0;
    for(int i=1;i<=M&&F;i++)
        if (d[m[i].i]!=1000000000000000001){
             F-=m[i].c;
             if(F>=0)
                 k++;
    }
    cout<<k;
    return 0;
}
