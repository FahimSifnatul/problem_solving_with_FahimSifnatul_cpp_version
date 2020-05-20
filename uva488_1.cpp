#include<iostream>
using namespace std;

int main()
{
    long long int a,f,i,j,t;
    cin>>t;
    while(t--)
    {
        cin>>a>>f;
        while(f--)
        {
        for(i=1;i<=a;i++)
        {

            for(j=i;j>=1;j--)
            {
                cout<<i;
            }
            cout<<endl;
        }
        for(i=a-1;i>=1;i--)
        {
            for(j=i;j>=1;j--)
            {
                cout<<i;
            }
            cout<<endl;
        }
        if(t>0)
        cout<<endl;
        else if(t==0 and f>0)
        cout<<endl;

        }
    }

    return 0;
}
