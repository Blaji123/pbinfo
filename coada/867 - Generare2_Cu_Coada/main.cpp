#include <iostream>
using namespace std;
int n,x,y,a;
bool apartine[10001];
void generare(int b){
   if(b<=n&&!apartine[b]){
       apartine[b]=1;
       generare(b+x);
       generare(b+y);
   }
}
int main()
{
    cin>>n>>a>>x>>y;
    generare(a);
    for(int i=0;i<=n;i++)
        if(apartine[i])
           cout<<i<<" ";
    return 0;
}
