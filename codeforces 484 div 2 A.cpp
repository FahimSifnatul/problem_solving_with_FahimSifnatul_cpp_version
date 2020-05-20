#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    string s,check,check1,check2;
    int n;
    cin>>n>>s;
    for(int i=0;i<n;i++)
    {
        i%2 == 0 ? check += '1' : check += '0';
    }
    check1 = check;
    reverse(check.begin(),check.end());
    check2 = check;
    s == check1 or s == check2 ? printf("Yes\n") : printf("No\n");
    return 0;
}
