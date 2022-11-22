#include <iostream>

using namespace std;
void ordon123(int n,int a[]){
   int fv[4],p=0;
   for(int i=1;i<=3;i++)
     fv[i]=0;
   for(int i=0;i<n;i++)
    fv[a[i]]++;
   for(int i=1;i<=3;i++)
      while(fv[i]>0)
   {
       a[p]=i;
       p++;
       fv[i]--;
   }
}
int main()
{
    int n,a[200];
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    ordon123(n,a);
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    return 0;
}
