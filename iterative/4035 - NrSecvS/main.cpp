#include <iostream>

using namespace std;
long long NrSecvS(int a[], int n, int S){
    int nr=1,sum=0;
   for(int i=1;i<=n;i++)
       sum+=a[i];
   if(sum<S)
      return 0;

   return nr;
}
void back1(int k){
    for(int i=x[k-1]+1;i<=n;++i)
    {
        x[k]=i;
        afis(k);
        back1(k+1);
    }
}
int main()
{
    int a[200],n,S;
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    cin>>S;
    cout<<NrSecvS(a,n,S);
    return 0;
}
