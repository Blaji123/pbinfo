#include <iostream>
#include <fstream>
using namespace std;
void interclasare(){
    int n,m,x,y;
  ifstream f("file1.txt");
  ifstream f1("file2.txt");
  ofstream g("file.out");
  f>>n;
  f1>>m;
  f>>x;
  f1>>y;
  int i=1,j=1;
  while(i<=n&&j<=m){
    if(x<=y)
    {
        g<<x<<" ";
        f>>x;
        i++;
    }
    else{
       g<<y<<" ";
       f1>>y;
       j++;
    }
  }
  while(i<=n){
    g<<x<<" ";
    f>>x;
    i++;
  }
  while(j<=m){
    g<<y<<" ";
    f1>>y;
    j++;
  }
}
int main()
{
    interclasare();
    return 0;
}
