#include <fstream>

using namespace std;
ifstream cin("pachete.in");
ofstream cout("pachete.out");
struct {
    int st,dr;
}x[401];
int n,v[101],cnt;
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>v[i];
    int gol=n+1;
    for(int i=1;i<=n;i++){
        if(v[i]!=i){
            if(v[i]!=v[gol]){
              v[gol]=v[i];
          x[++cnt].st=i;x[cnt].dr=gol;
            }
          int ok=1;
          for(int j=i+1;j<=n+1&&ok;j++)
               if(v[j]==i){
                   v[i]=v[j],gol=j,ok=0;
                   x[++cnt].st=j;x[cnt].dr=i;
               }
        }
    }
    cout<<cnt<<endl;
    for(int i=1;i<=cnt;i++)
        cout<<x[i].st<<" "<<x[i].dr<<endl;
    return 0;
}
