#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    scanf("%d",&n);
    int a[n],check[1001];
    memset(check,-1,sizeof check);
    set<int>st;
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]),st.insert(a[i]),check[a[i]]=i;
    cout<<st.size()<<endl;
    for(int i=0;i<n;i++)
        if(check[a[i]] == i)
           printf("%d ",a[i]);
}
