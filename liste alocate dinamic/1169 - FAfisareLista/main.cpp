#include <iostream>

using namespace std;
struct nod{
    int info;
    nod * urm;
};
void afisare(nod * p){
   nod *t=p;
   while(t!=NULL){
    cout<<t->info<<" ";
    t=t->urm;
   }
}
int main()
{
    nod *t=new nod;
    cin>>t->info;
    t->urm=NULL;

    afisare(t);
    return 0;
}
