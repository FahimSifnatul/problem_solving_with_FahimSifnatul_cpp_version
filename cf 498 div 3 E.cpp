#include<bits/stdc++.h>
using namespace std;
int n,q,a[200005],b[200005],len[200005],cnt=1;
vector<int>v[200005];

int dfs(int sup)
{
    int l = v[sup].size();
    for(int i=0;i<l;i++)
    {
        a[v[sup][i]] = ++cnt;
        b[cnt] = v[sup][i];
        dfs(v[sup][i]);
        len[sup] += len[v[sup][i]];
    }
}

int main()
{
    scanf("%d%d",&n,&q);
    for(int i=2;i<=n;i++)
    {
        int temp;
        scanf("%d",&temp);
        v[temp].push_back(i);
    }
    a[1] = 1;
    b[1] = 1;
    for(int i=1;i<=n;i++)
        len[i] = 1;
    dfs(1);
    for(int i=0;i<q;i++)
    {
        int n,k;
        scanf("%d%d",&n,&k);
        if(len[n] < k)
        {
            printf("-1\n");
            continue;
        }
        int ans = b[a[n]+k-1];
        printf("%d\n",ans);
    }
}












