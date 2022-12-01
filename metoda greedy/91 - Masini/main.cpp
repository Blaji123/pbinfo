#include <fstream>

using namespace std;
ifstream cin("masini.in");
ofstream cout("masini.out");
void sortare(int a[],int n){
   for(int i=1;i<=n;i++)
    for(int j=1;j<=n;j++)
      if(a[i]<a[j])
        swap(a[i],a[j]);
}
int main()
{
    int n,T,t[1001];
    cin>>n>>T;
    for(int i=1;i<=n;i++)
        cin>>t[i];
    sortare(t,n);
    int i=1;
    while(T-t[i]>=0 && i<=n)
        T-=t[i],i++;
    cout<<i-1;
    return 0;
}
