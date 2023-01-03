#include <iostream>

using namespace std;
int n,a[11],p[11],ok,cnt;
void afis(){
   for(int i=1;i<=n;i++){
      for(int j=1;j<=n;j++)
        if(a[j]==i) cout<<"*"<<" ";
      else
        cout<<"-"<<" ";
      cout<<endl;
   }
   cnt++;
}
void back(int k){
     for(int i=1;i<=n&&cnt==0;i++)
     if(!p[i]){
        ok=0;
        a[k]=i;
        p[i]=1;
        for(int j=1;j<k;j++)
            if(k-j==abs(a[k]-a[j]))
              ok=1;
        if(k==n&&ok==0)
            afis();
        else
            if(ok==0) back(k+1);
        p[i]=0;
     }
}
int main()
{
    cin>>n;
    back(1);
    return 0;
}
