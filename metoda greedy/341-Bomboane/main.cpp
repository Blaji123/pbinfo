#include <fstream>

using namespace std;
ifstream cin("bomboane.in");
ofstream cout("bomboane.out");
int n,a[1001],sum,imin,imax,m[1001][4],cnt;
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i],sum+=a[i];
    if(sum%n) cout<<-1;
    else{
        sum/=n;
        int ok=1;
        while(ok){
            int mini=1000000,maxi=-1;
            for(int i=1;i<=n;i++)
            {
                if(a[i]<mini) mini=a[i],imin=i;
                if(a[i]>maxi) maxi=a[i],imax=i;
            }
            if(mini==maxi) ok=0;
            else{
                m[++cnt][1]=imax;
                m[cnt][2]=imin;
                m[cnt][3]=sum-mini;
                a[imax]=maxi-(sum-mini);
                a[imin]=mini+(sum-mini);
            }
        }
    cout<<cnt<<endl;
    for(int i=1;i<=cnt;i++){
        for(int j=1;j<=3;j++)
            cout<<m[i][j]<<" ";
        cout<<endl;
    }
    }
    return 0;
}
