#include <fstream>

using namespace std;
ifstream cin("spectacole.in");
ofstream cout("spectacole.out");
struct spectacol{
  int st,dr;
}v[101];
void sortare(int n,spectacol v[]){
    for(int i=1;i<n;i++)
      for(int j=i+1;j<=n;j++)
        if(v[i].dr>v[j].dr)
          swap(v[i],v[j]);
}
int n,nr=1;
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>v[i].st>>v[i].dr;
    sortare(n,v);
    int ora_finish=v[1].dr;
    for(int i=2;i<=n;i++)
        if(ora_finish<=v[i].st){
            nr++;
            ora_finish=v[i].dr;
        }
    cout<<nr;
    return 0;
}
