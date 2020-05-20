#include<bits/stdc++.h>
using namespace std;
int cnt;

int binary(int l,int r,int b,int c,int a[])
{
    int m = (l+r)/2;
    if(l>r)return 0;
    else if(a[m]+b>c and a[m]+c>b and b+c>a[m])
    {
        cnt += r-m+1;
        binary(l,m-1,b,c,a);
    }
    else binary(l,m-1,b,c,a);
}

int main()
{
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        int n;
        scanf("%d",&n);
        int a[n];
        for(int j=0;j<n;j++)
            scanf("%d",&a[j]);
        stable_sort(a,a+n);
        for(int j=0;j<n-2;j++)
        {
           for(int k=j+1;k<n-1;k++)
           {
               binary(k+1,n-1,a[j],a[k],a);
           }
        }
        printf("Case %d: %d\n",i,cnt);
        cnt = 0;
    }
}










