#include <iostream>

using namespace std;
int egale(int V[], int st, int dr)
{
    if(st == dr)
        return V[st]; // problemă elementară
    else
    {
        int m = (st + dr) / 2; // împărțim problema în subprobleme
        int s1 =egale(V, st, m); // rezolvăm prima subproblemă
        int s2 = egale(V, m + 1, dr); // rezolvăm a doua subproblemă
        return s1 + s2; // combinăm rezultatele
    }
}
int main()
{
    int n,v[501];
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>v[i];
    if(egale(v,1,n)==v[1]*n)
        cout<<"DA";
    else
        cout<<"NU";
    return 0;
}
