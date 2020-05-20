#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
    int n,xx,x,y,inter=0,gremio=0,draw=0,grenais=1;

    xx:
    cin>> x >> y;
    (x>y) ? ++inter : ++gremio;
    (x==y)? ++draw : printf("");
    cout<< "Novo grenal (1-sim 2-nao)\n";
    cin>> n;
    if(n==1)
    {
        ++grenais;
        goto xx;
    }
    else if(n==2)
    {

        cout<<grenais<<" grenais\n";
        cout<<"Inter:"<<inter<<"\n";
        cout<<"Gremio:"<<gremio<<"\n";
        cout<<"Empates:"<<draw<<"\n";
        (inter>gremio)?cout<<"Inter venceu mais\n":cout<<"Gremio venceu mais\n";

    }







       return 0;


}









