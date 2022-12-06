#include <iostream>

using namespace std;
struct mos{
    int p,c;
}v[1001];
void sortare(int n,mos v[]){
    for(int i=1;i<n;i++)
      for(int j=i+1;j<=n;j++)
        if(v[i].p>v[j].p)
          swap(v[i],v[j]);
}
int main()
{
    int n,m,sum=0,S=0;
    cin>>n>>m;
    for(int i=1;i<=m;i++)
        cin>>v[i].p>>v[i].c,sum+=v[i].c;
    sortare(m,v);
    int k=1;
    while(n>0&&sum>0){
        for(int i=1;i<=v[k].c&&n>0;i++)
            n--,S+=v[k].p;
        sum-=v[k].c,k++;
    }
    if(n==0)
        cout<<S;
    else
        cout<<"imposibil";
    return 0;
}
