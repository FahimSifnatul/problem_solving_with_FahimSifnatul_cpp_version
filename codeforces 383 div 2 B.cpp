#include<bits/stdc++.h>
using namespace std;
int num[100005];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n,x;
    cin>>n>>x;
    int a[n];
    for(int i=0;i<n;i++)
    {
       cin>>a[i];
       ++num[a[i]];
    }
    long long int cnt = 0;
    for(int i=0;i<n;i++)
    {
       --num[a[i]];
       if((a[i]^x) > 100000)continue;
       else
       {
         cnt += num[(a[i]^x)];
       }
    }
    cout<<cnt;
 return 0;
}


/*
64 43
78 90 211 205 198 4 172 43 163 21 58 145 28 66 210 68 79 90 155 123 9 119 188 151 180 157 44 163 20 71 28 120 163 141 170 206 31 34 21 195 72 194 83 163 140 40 182 208 127 128 110 72 184 157 128 189 146 35 51 206 62 8 117 61
ans - 8
*/



