#include <fstream>

using namespace std;
ifstream cin("gengraf.in");
ofstream cout("gengraf.out");
int m,a[11][11],x[101],p,n;
void afisare(){
    int k=1;
    for(int i=1;i<=n;i++)
        for(int j=i+1;j<=n;j++)
    {
        a[i][j]=a[j][i]=x[k];
        k++;
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }
    cout<<endl;
}
void generare(int k){
   for(int i=0;i<=1;i++)
   {
       x[k]=i;
       if(k==m)
         afisare();
       else
          generare(k+1);
   }
}
int main()
{
    cin>>n;
    m=n*(n-1)/2;
    p=1<<m;
    cout<<p<<endl;
    generare(1);
    return 0;
}
