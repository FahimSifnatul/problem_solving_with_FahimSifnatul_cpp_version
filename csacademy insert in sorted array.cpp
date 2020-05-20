//bismillahir rahmanir rahim
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,x;
    cin>>n>>x;
    int a[n+1];
    bool flg=false;
    int pos=n+1;
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]>x and flg==false)
        {
           pos=i;
           flg=true;
        }
    }
    cout<<pos<<endl;
    return 0;
}
