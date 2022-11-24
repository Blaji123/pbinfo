#include <iostream>

using namespace std;
void ordonare(int a[],int n,int st,int dr){
    for(int i=st;i<dr;i++)
      for(int j=i+1;j<=dr;j++)
          if(a[i]>a[j])
            swap(a[i],a[j]);
}
int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
