#include <iostream>
#include <queue>
using namespace std;

int main()
{
    int n,x;
    queue<int> Q;
    string s;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>s;
        if(s=="push"){
            cin>>x;
            Q.push(x);
        }
       else if(s=="pop")
           Q.pop();
       else if(s=="front")
           cout<<Q.front()<<endl;
    }
    return 0;
}
