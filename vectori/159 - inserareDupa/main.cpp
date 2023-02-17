#include <iostream>
#include <vector>
using namespace std;
vector<int> V;
int n,x,m;
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>x;
        V.push_back(x);
        if(x%2==0)
            V.push_back(2*x);
    }
    for(auto i:V)
        cout<<i<<" ";
    return 0;
}
