#include <iostream>
#include <stack>
using namespace std;
stack<int> stiva;
int ans[100001],v[100001],n;
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>v[i];
    for(int i=n;i>=1;i--){
        while(!stiva.empty()&&v[i]>=v[stiva.top()])
            stiva.pop();
        if(stiva.empty())
            ans[i]=-1;
        else
            ans[i]=v[stiva.top()];
        stiva.push(i);
    }
    for(int i=1;i<=n;i++)
       cout<<ans[i]<<" ";
    return 0;
}
