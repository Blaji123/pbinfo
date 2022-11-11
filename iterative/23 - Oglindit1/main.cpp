#include <iostream>

using namespace std;
void oglindit(int n,int &og){
  og=0;
  while(n){
    og=og*10+(n%10);
    n/=10;
  }
}
int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
