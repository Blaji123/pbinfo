#include <fstream>

using namespace std;
ifstream cin("cb2.in");
ofstream cout("cb2.out");
int a[100001],s[100001],maxime[100001];
int cb(int a[],int n, int val){
   int st=1,dr=n;
   while(st<=dr){
      int mij=(st+dr)/2;
      if(val<a[mij])
          dr=mij-1;
      else
          st=mij+1;
   }
   return dr;
}
int main()
{
    int n,Q,x,p;
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i],s[i]=s[i-1]+a[i];
    for(int i=1;i<=n;i++){
        if(a[i]>maxime[i-1])
            maxime[i]=a[i];
        else
            maxime[i]=maxime[i-1];
    }
    cin>>Q;
    while(Q){
        cin>>x>>p;
        int val1=cb(maxime,n,x);
        int val2=cb(s,n,p);
        cout<<min(val1,val2)<<'\n';
    Q--;
    }
    return 0;
}
