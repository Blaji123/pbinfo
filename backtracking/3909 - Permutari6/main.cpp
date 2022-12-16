#include <iostream>

using namespace std;
long long a,b,x[11],n;
void afisare(){
   for(long long i=1;i<=n;i++)
     cout<<x[i]<<" ";
   cout<<endl;
}
bool valid(long long k){
    for(long long i=1;i<k;i++)
         if(x[i]==x[k])
           return 0;
    return 1;
}
void back(long long k){
   for(long long i=a;i<=b;i++){
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
    cin>>a>>b;
    n=b-a+1;
    back(1);
    return 0;
}
