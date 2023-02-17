#include<iostream>
using namespace std;

int main()
{
    int x,max=0;
    cin>>x;
    max=x;
    if(x==0)
        cout<<"NU EXISTA";
    else
    {
        while(cin>>x && x!=0)
        {
            if(x>max)
                max=x;
        }
        cout<<max;
    }
    return 0;

}
