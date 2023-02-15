#include <iostream>

using namespace std;
int n;
struct {
    int h,poz;
}v[1001];
void sortare(){
   for(int i=1;i<n;i++)
      for(int j=i+1;j<=n;j++)
        if(v[i].h>v[j].h){
           swap(v[i].h,v[j].h);
           swap(v[i].poz,v[j].poz);
        }
}
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>v[i].h,v[i].poz=i;
    sortare();
    for(int i=1;i<=n;i++)
        cout<<v[i].poz<<" ";
    return 0;
}
