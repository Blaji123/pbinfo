#include <bits/stdc++.h>
using namespace std;
#define Inf 0x3f3f3f3f
ifstream f("dijkstra.in");
ofstream g("dijkstra.out");
using PI = pair<int , int>;
int n , m , x , y , p , D[100001] , w;
vector <PI> G[100001];
void dijkstra(int nod)
{
    priority_queue < PI , vector<PI> , greater<PI> > Q;
    D[nod] = 0;
    Q.push({0 , nod});
    while(!Q.empty())
    {
       x = Q.top().first;
       y = Q.top().second;
       Q.pop();
       if(x > D[y]) continue;
       for(auto& q:G[y])
       {
           int nodnou = q.first;
           int costnou = q.second;
           if(D[nodnou] > D[y] + costnou)
           {
               D[nodnou] = D[y] + costnou;
               Q.push({D[nodnou] , nodnou});
           }
       }
    }
}
int main()
{
    f >> n >> p;
    while(f >> x >> y >> w)
        G[x].push_back({y , w});
    for(int i = 1 ; i <= n ; i++)
        D[i] = Inf;
    dijkstra(p);
    for(int i = 1 ; i <= n ; i++)
        if(D[i] == Inf) g << "-1 ";
        else g << D[i] << " ";
}
