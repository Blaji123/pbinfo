#include <iostream>

using namespace std;
int diofantic(int n, int s[], int a,long long b,int c)
{
    int k=0;int i=1; int j=n;
    while(i<=n && j>0)
    {
        if(a*s[i]*s[i]+b*s[j]*s[j]==c )
        {
            k++;
            i++;
        }
        if(a*s[i]*s[i]+b*s[j]*s[j]<c)
        i++;
        if(a*s[i]*s[i]+b*s[j]*s[j]>c)
        j--;
    }
    return k;
}
int main()
{
    int n,s[20],a,b,c;
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>s[i];
    cin>>a>>b>>c;
    cout<<diofantic(n,s,a,b,c);
    return 0;
}
