#include <iostream>
#include <cstring>
using namespace std;
int SC (char s[])
{
    int lg = strlen(s);
    if(lg==0) return 0;
    else
    {
        if(s[lg-1]>=48 && s[lg-1]<=57)
        {
            int nr=s[lg-1]-48;
            s[lg-1]='\0';
            return SC(s)+nr;
        }
        else
        {
            s[lg-1]='\0';
            return SC(s);
        }
    }
}

int main()
{
    char s[256];
    cin.getline(s, 256);
    cout<<SC(s);
    return 0;
}
