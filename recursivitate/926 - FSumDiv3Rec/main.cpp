#include <iostream>

using namespace std;
int s=0;
int sum3(int v[],int n){
  if(n==0&&v[0]%3==0)
    return v[0];
  else if(n==0)
    return 0;
  else{
    if(v[n-1]%3==0)
       s+=v[n-1];
    n--;
    sum3(v,n);
  }
  return s;
}
int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
