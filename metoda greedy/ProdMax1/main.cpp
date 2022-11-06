#include <iostream>

using namespace std;
int main()
{
    int n,v[100000],p=INT_MIN,i,j;
    cin>>n;
    for(i=1;i<=n;i++)
        cin>>v[i];
    for(i=1;i<=n;i++)
  {
      if(v[i]*v[i+1]>p)

    cout<<p;
    return 0;
}
