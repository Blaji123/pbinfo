#include <fstream>
#include <queue>
using namespace std;
ifstream cin("vot.in");
ofstream cout("vot.out");
int n,v[1001],S[1001];
queue<int> Q;
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>v[i],S[v[i]]++;
    for(int i=1;i<=n;i++)
        if(S[i]==0)
          Q.push(i);
    while(!Q.empty()){
        int x=Q.front();
        S[v[x]]--;
        if(S[v[x]]==0)
            Q.push(v[x]);
        Q.pop();
    }
    int cnt=0;
    for(int i=1;i<=n;i++)
        if(S[i]!=0)
          cnt++;
    cout<<cnt<<endl;
    for(int i=1;i<=n;i++)
        if(S[i]!=0)
          cout<<i<<" ";
    return 0;
}
