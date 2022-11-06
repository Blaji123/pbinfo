#include <iostream>

using namespace std;
long long v[10000001];
void dealuri(int i,int &nr){
  if(v[i]>v[i-1])
  {
      nr++;
      dealuri(i+1,nr);
      cout<<v[i]<<" ";
  }
}
int main()
{
    int i=1,nr=0,j=1;
    cin>>v[i];
    while(v[i]!=0)
    {
        i++;
        cin>>v[i];
    }
    while(j<=i)
        if(v[j])
        {
            dealuri(j,nr);
            j=j+nr;
            nr=0;
        }
    return 0;
}
