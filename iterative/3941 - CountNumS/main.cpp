#include <iostream>

using namespace std;
long long CountSumS(vector<int> &a, int s){
    int nr=0;
   for(int i=0;i<a.size()-1;i++)
    for(int j=i+1;j<a.size();j++)
       if(a[i]+a[j]==s)
          nr++;
   return nr;
}
int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
