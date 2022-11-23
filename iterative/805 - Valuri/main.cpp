#include <iostream>

using namespace std;
void valuri(int n,int v[]){
    int p=-1;
  for(int i=1,j=2*n;i<=2*n,j>=0;i+=2,j-=2)
  {
      p++;
      v[p]=i;
      p++;
      v[p]=j;
  }
}
int main()
{
    int n,v[200];
    cin>>n;
    valuri(n,v);
    for(int i=0;i<2*n;i++)
        cout<<v[i]<<" ";
    return 0;
}
