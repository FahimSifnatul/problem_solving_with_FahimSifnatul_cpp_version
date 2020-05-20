#include<iostream>
using namespace std;
long long int fre1(long long int a,long long int i)
{

    if(i<=a)
    {
        for(int k=1;k<=i;k++)
        {
            cout<<i;
        }
        cout<<endl;
        ++i;
        return fre1(a,i);
    }
}


long long int fre2(long long int a,long long int i)
{

    if(i>=1)
    {
       for(int k=1;k<=i;k++)
       {
            cout<<i;
       }
           cout<<endl;

        --i;
        return fre2(a,i);
    }

}

int main()
{
    long long int t,a,f,i;
    cin>>t;
    cout<<endl;
    while(t--)
    {
       cin>>a;
       cin>>f;
       if(t>0)
       {
       for(int m=0;m<f;m++)
       {
           i=1;
           fre1(a,i);
           i=a-1;
           fre2(a,i);
           cout<<endl;

       }
       }
       else
       {
        for(int m=0;m<f;m++)
       {
           i=1;
           fre1(a,i);
           i=a-1;
           fre2(a,i);
           if(m<f-1)
           {
            cout<<endl;
           }
       }
       }

    }
       return 0;
}





