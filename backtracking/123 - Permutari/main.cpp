#include <iostream>

using namespace std;
int n,x[10];
void afisare(){
  for(int i=1;i<=n;i++)
    cout<<x[i]<<" ";
  cout<<endl;
}
bool valid(int k){
   for(int i=1;i<k;i++)
      if(x[i]==x[k])
         return 0;
   return 1;
}
void back(int k){
   for(int i=1;i<=n;i++){
    x[k]=i;
    if(valid(k))
       if(k==n)
        afisare();
    else
        back(k+1);
   }
}
int main()
{
    cin>>n;
    back(1);
    return 0;
}
