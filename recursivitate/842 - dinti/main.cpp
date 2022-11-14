#include <iostream>

using namespace std;
void dinti(int n){
   if(n!=0)
   {
   dinti(n-1);
   cout<<n<<" ";
   dinti(n-1);
   }
}
int main()
{
    int n;
    cin>>n;
    dinti(n);
    return 0;
}
