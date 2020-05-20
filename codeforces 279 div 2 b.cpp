//bismillahir rahmanir rahim
#include<bits/stdc++.h>
using namespace std;
map<int,int>mp,node;

int main()
{
    int n;
    scanf("%d",&n);
    int n1[n],n2[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d%d",&n1[i],&n2[i]);
        if(n1[i]==0)n1[i]=-1;
        mp[n2[i]]=n1[i];
        node[n1[i]]=n2[i];
    }
    int temp1=-1,temp2;
    for(int i=0;i<n;i++)
    {
        if(mp[n1[i]]==0 and n1[i]!=-1)
           temp2=n1[i];

    }

    while(true)
    {
        if(node[temp1]!=0)
        {
           if(temp1!=-1)
           cout<<temp1<<' ';
           temp1=node[temp1];
        }
        if(node[temp2]!=0)
        {
           cout<<temp2<<' ';
           temp2=node[temp2];
        }
        if(node[temp1]==0 and node[temp2]==0)break;
    }
    if(n%2==0)
    {
     if(temp1!=0)cout<<temp2<<' ';
     if(temp2!=0)cout<<temp1;
    }
    else
    {
     if(temp1!=0)cout<<temp1<<' ';
     if(temp2!=0)cout<<temp2;
    }


    return 0;
}










