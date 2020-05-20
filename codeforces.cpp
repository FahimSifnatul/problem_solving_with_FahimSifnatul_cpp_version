#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,first,sec,sq,i,flg=0,alter=1;
    cin>>n;
    if(n%2==0)
    {
        cout<<n/2<<" "<<n/2<<endl;
    }
    else
    {
        first=n/2;
        sec=(n+1)/2;

        while(flg!=1)
        {
            if(alter%2!=0)
            {
                sq=sqrt(sec);
            }
            else
                sq=sqrt(first);
            ++alter;
         for(i=3;i<=sq;i++)
        {
            if(sec%i==0)
            {
                cout<<first<<" "<<sec<<endl;
                ++flg;
                break;
            }
        }
        if(flg==0)
        {
            --first;
            ++sec;
        }
        }

    }
    return 0;
}
