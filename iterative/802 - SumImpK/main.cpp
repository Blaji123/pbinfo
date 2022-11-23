#include <iostream>

using namespace std;
int sub(int n,int v[],int k){
    int sum=0,nr=0;
    for(int i=0;i<n;i++)
      if(v[i]%2==1){
          sum+=v[i];
          nr++;
          if(nr==k)
            return sum;
      }
    return -1;
}
int main()
{

    return 0;
}
