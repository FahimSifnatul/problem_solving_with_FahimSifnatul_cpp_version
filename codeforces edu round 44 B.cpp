#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n,m;
    cin>>n>>m;
    char a[n+1][m+1];
    vector<int>v[m+1];
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            cin>>a[i][j];
            if(a[i][j] == '1') v[j].push_back(i);
        }
    }
    for(int i=1;i<=n;i++)
    {
        bool check = true;
        for(int j=1;j<=m;j++)
        {
           if(a[i][j]=='1' and v[j].size()==1)
           {
            check = false;
            //cout<<j<<' ';
           }

        }
        //cout<<endl;
        if(check == true)
        {
            cout<<"YES";
            return 0;
        }
    }
    printf("NO\n");
    return 0;
}














