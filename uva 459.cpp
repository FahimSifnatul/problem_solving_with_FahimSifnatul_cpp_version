#include<bits/stdc++.h>
using namespace std;
int cnt;
int FIND(int n,int parent[])
{
   if(parent[n] == n)return n;
   parent[n] = FIND(parent[n],parent);
   return parent[n];
    //   return parent[n];
}

int UNION(int n1,int n2,int parent[])
{
   int u = FIND(n1,parent);
   int v = FIND(n2,parent);
   if(u != v)
   {
       parent[v] = u;
       --cnt;
   }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    scanf("%d ",&n);
    while(n--)
    {
        char c;
        scanf("%c ",&c);
        int len = c-'A'+1;
        int parent[len];
        for(int i=0;i<len;i++)parent[i] = i;
        char s[10];
        cnt = len;
        while(gets(s))
        {
            if(s[0] == '\0') break;
            UNION(s[0]-'A',s[1]-'A',parent);
        }
        printf("%d\n",cnt);
        if(n)puts("");
    }
    return 0;
}



















