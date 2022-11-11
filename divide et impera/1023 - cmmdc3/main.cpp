#include <iostream>

using namespace std;
int CMMDC2(int x, int y){
    while(x!=y)
    {
    if(x>y)
        x=x-y;
    if(x<y)
        y=y-x;
    }
        return x;
}
int CMMDC(int V[], int st, int dr)
{
    if(st == dr)
        return V[st]; // problemă elementară
    else
    {
        int m = (st + dr) / 2; // împărțim problema în subprobleme
        int a = CMMDC(V, st, m); // rezolvăm prima subproblemă
        int b = CMMDC(V, m + 1, dr); // rezolvăm a doua subproblemă
        return CMMDC2(a,b); // combinăm rezultatele
    }
}
int main()
{
    int n,V[101];
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>V[i];
    cout<<CMMDC(V,1,n);
    return 0;
}
