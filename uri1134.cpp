#include<iostream>
using namespace std;

int main()
{

    int n,al=0,gas=0,die=0;
    while(cin>>n && n!=4)
    {
        switch(n)
        {
        case 1:
            ++al;
            break;
        case 2:
            ++gas;
            break;
        case 3:
            ++die;
            break;
        }


    }
    cout<<"MUITO OBRIGADO\n";
    cout<<"Alcool: "<<al<<"\n";
    cout<<"Gasolina: "<<gas<<"\n";
    cout<<"Diesel: "<<die<<"\n";
 return 0;
}
