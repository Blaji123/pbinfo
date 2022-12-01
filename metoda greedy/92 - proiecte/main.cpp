#include <fstream>

using namespace std;
ifstream cin("proiecte.in");
ofstream cout("proiecte.out");
struct proiect{
   int tmp,poz;
}a[1001];
void sortare(proiect a[],int n){
   for(int i=1;i<=n;i++)
    for(int j=1;j<=n;j++)
      if(a[i].tmp<a[j].tmp)
        swap(a[i],a[j]);
}
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i].tmp,a[i].poz=i;
    sortare(a,n);
    for(int i=1;i<=n;i++)
        cout<<a[i].poz<<" ";
    return 0;
}
