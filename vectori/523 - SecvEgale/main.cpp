#include <iostream>

using namespace std;
int n,v[1001];
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>v[i];
    int st=1,dr=0;
    for(int i=1;i<=n;i++){
        int j=i;
        while(j+1<=n&&v[j]==v[j+1])
            j++;
        if(j-i+1>=dr-st+1)
            st=i,dr=j;
    }
    cout<<st<<" "<<dr;
    return 0;
}
