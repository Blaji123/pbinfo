#include <iostream>

using namespace std;
struct Nod
{
    int info;
    Nod *leg;
};
void FLsiDesc(Nod *head){
   int n=head->info;
   while(n>0){
    if(head->leg->info!=n-1)
    {
        Nod *t=new Nod;
        t->info=n-1;
        head->leg=t;
        head=head->leg;
    }
    n--;
   }
}
int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
