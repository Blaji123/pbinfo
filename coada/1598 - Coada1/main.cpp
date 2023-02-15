#include <fstream>
#include <queue>
using namespace std;
ifstream cin("coada1.in");
ofstream cout("coada1.out");
queue<int> Q;
int x,M,sterse,poz,v[1001];
int main()
{
    cin>>M;
    string s;
    for(int i=1;i<=M;i++){
        cin>>s;
        cin>>x;
        if(s=="push"){
            if(v[x]!=0){
                while(Q.front()!=x){
                    v[Q.front()]=0;
                    Q.pop();
                    sterse++;
        }
        Q.pop();
        sterse++;
       }
       poz++;
       Q.push(x);
       v[x]=poz;
    }
    else{
        if(v[x]==0)
            cout<<-1<<endl;
        else
            cout<<v[x]-sterse<<endl;
    }
    }
    return 0;
}
