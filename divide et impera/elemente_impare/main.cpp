#include <iostream>

using namespace std;
int impare(int V[],int st,int dr){
    if(st==dr)
        if(V[st]%2==1)
         return V[st];
        else
            return 0;
    else
    {
        int m=(st+dr)/2;
        int nr1=impare(V,st,m);
        int nr2=impare(V,m+1,dr);
        return nr1+nr2;
    }
}
int main()
{
    int n,V[101];
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>V[i];
    if(impare(V,1,n)>0)
        cout<<"DA";
    else
        cout<<"NU";
    return 0;
}
