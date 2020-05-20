
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    int an=1,xo=0,o=0;
    cin>>n;
    char c;
    int b;
    bool AN = false, XO = false,O = false;
    for(int i=0;i<n;i++)
    {
       cin>>c>>b;
       if(c == '&') an &= b,AN = true;
       else if(c == '^') xo ^= b, XO = true;
       else o |= b, O = true;
    }
    int cnt = 0;
    if(AN)++cnt;
    if(XO)++cnt;
    if(O)++cnt;
    cout<<cnt<<endl;
    if(AN)cout<<"& "<<an<<endl;
    if(O)cout<<"| "<<o<<endl;
    if(XO)cout<<"^ "<<xo<<endl;
    return 0;
}

