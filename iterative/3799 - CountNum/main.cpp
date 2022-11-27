#include <iostream>

using namespace std;
vector<int> CountNum(vector<int> &a, int S){
    vector<int> result;
    sort(a.begin(),a.end());
    for(int i=0;i<a.size()&&S-a[i]>=0;i++){
        result.push_back(a[i]);
        S-=a[i];
    }
   return result;
}
int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
