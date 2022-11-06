#include <iostream>

using namespace std;
long long dinti(int n){
    if(n==0)
        return 0;
   return n+dinti(n-1)*2;
}
int main()
{
    int n;
    cin>>n;
    cout<<dinti(n);
    return 0;
}
