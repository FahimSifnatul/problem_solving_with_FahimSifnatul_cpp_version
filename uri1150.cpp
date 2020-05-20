#include<iostream>

using namespace std;

int main()
{
    int a,n,count=1,sum=0;

    cin>>a>>n;

    while( n<=a)
    {

       cin>>n;

    }

    for(int i=a;i<=n;i++)
    {
        sum=sum+i;
        if(sum<=n)
        {
            ++count;
            continue;
        }
        else
            break;

    }


    cout<<count<<"\n";





    return 0;

}

