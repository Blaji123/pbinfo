#include <iostream>

using namespace std;
int n,v[101],S_par,S_i_par,nr_div10,S_div3;
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>v[i];
        if(v[i]%2==0)
            S_par+=v[i];
        if(i%2==0)
            S_i_par+=v[i];
        if(v[i]%10==0)
            nr_div10++;
        if(v[i]%3==0&&i%2==1)
            S_div3+=v[i];
    }
    for(int i=n;i>=1;i--)
        cout<<v[i]<<" ";
    cout<<endl<<S_par;
    cout<<endl<<S_i_par;
    cout<<endl<<nr_div10;
    cout<<endl<<S_div3;
    return 0;
}
