#include<fstream>
#include<set>
#include<queue>
using namespace std;
ifstream cin("ghiocel.in");
ofstream cout("ghiocel.out");
set<int> vecini[102];
bool gasit[102];
queue<int> q;
int distanta[102];
void BFS(int start)
{
    q.push(start);
    while(!q.empty())
    {
        for(auto j:vecini[q.front()]){
            if(!gasit[j])
            {
                gasit[j]=1;
                q.push(j);
                distanta[j]=distanta[q.front()]+1;
            }
        }
        q.pop();
    }
}
int main()
{
    int n,m,a,b,fete,start;
    cin>>n>>m>>start;
    for(int i=0; i<m; i++)
    {
        cin>>a>>b;
        vecini[a].insert(b);
        vecini[b].insert(a);
    }
    BFS(start);
    cin>>fete;
    set<int> colege;
    for(int i=0; i<fete; i++)
    {
        cin>>a;
        colege.insert(a);
    }
    cin.close();
    int mini=100000;
    for(auto i:colege)
        mini=min(mini,distanta[i]);
    for(auto i:colege)
        if(distanta[i]==mini)
            cout<<i<<" ";
    cout<<endl;
    cout.close();
    return 0;//superpeace
}
