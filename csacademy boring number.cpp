//bismillahir rahmanir rahim
#include<bits/stdc++.h>
using namespace std;

struct val
{
    int index;
    double dif;
};

bool comp(val a,val b)
{
    return a.dif<b.dif;
}

int main()
{
    int n;
    scanf("%d",&n);
    double a[n],avg=0.00;
    val ans[n];
    for(int i=0;i<n;i++)
    {
        scanf("%lf",&a[i]);
        avg+=a[i];
        ans[i].index=i+1;
    }
    avg/=(double)n;
    for(int i=0;i<n;i++)
    {
        ans[i].dif=abs(avg-a[i]);
    }
    stable_sort(ans,ans+n,comp);
    cout<<ans[0].index<<endl;
    return 0;
}






