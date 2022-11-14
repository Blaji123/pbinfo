#include <iostream>

using namespace std;
bool is_prim(int n)
{
    if(n==1 || n==0) return false;
    if(n!=2 && n%2==0) return false;
    for(int d=3;d*d<=n;d++)
        if(n%d==0) return false;
    return true;
}
void P(int x[],int n,int &s){
  if(n==0)
    s=0;
  else
  {
    if(is_prim(x[n-1]))
    {
        n--;
        P(x,n,s);
        s+=x[n];
    }
    else
      P(x,n-1,s);
  }
}
int main()
{
    int n,x[20],s;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>x[i];
    P(x,n,s);
    cout<<s;
    return 0;
}
