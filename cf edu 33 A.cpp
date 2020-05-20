#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n,pres;
    cin>>n;
    int a[n];
    int har,spec = 3;
    for(int i=0;i<n;i++)
    {
       cin>>a[i];
    }
    bool flg = false;
    for(int i=0;i<n;i++)
    {
        if(i == 0)
        {
            spec = 3;
            a[i] == 1 ? har=2 : har=1;
        }
        if(flg == false)
        {
            if(i==0)
            {
               if(a[i]==spec)flg = true;
            }
            else
            {
                if(a[i] == a[i-1])
                {
                    swap(har,spec);
                }
                else
                {
                    if(a[i] == har)flg = true;
                    else
                    {
                        spec = har;
                        har = a[i-1];
                    }
                }
            }
        }
        //cout<<i<<' '<<a[i]<<' '<<har<<' '<<spec<<endl;
    }
    flg == true ? cout<<"NO":cout<<"YES";
    return 0;
}












