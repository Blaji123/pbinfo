#include <iostream>

using namespace std;
int n,v[1001];
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>v[i];
    int st=1,dr=0;
    for(int i=1;i<=n;i++)
      if(v[i]==0){
        int j=i;
        while(j+1<=n&&v[j+1]==0)
            j++;
        if(j-i+1>dr-st+1)
            st=i,dr=j;
        i=j;
      }
    cout<<st<<" "<<dr;
    return 0;
}
