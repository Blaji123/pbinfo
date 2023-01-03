#include <iostream>

using namespace std;
struct nod{
    int info;
    nod * urm;
};
void adaugare(nod * & p , int x){
   nod *t=new nod;
   t->info=x;
   t->urm=NULL;
   if(p==NULL)
      p=t;
   else{
    nod *q=p;
    while(q->urm!=NULL)
        q=q->urm;
    q->urm=t;
   }
}
int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
