#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin>>n;
    string s;
    int len = sqrt(n);
    vector<int>v;
    for(int i=1;i<=len;i++)
    {
        if(n%i == 0)
        {
            v.push_back(i);
            bitset<20>bit(n/i);
            s = bit.to_string();
            int flg = 0,one=0,zero=0;
            for(int j=1;j<20;j++)
            {
                if(s[j] != s[j-1])++flg;
                if(flg == 1)++one;
                else if(flg == 2)++zero;
                else if(flg == 3)break;
            }
            if(flg == 2 and one==zero+1)
            {
                cout<<n/i<<endl;
                return 0;
            }
        }
    }
    len = v.size();
    for(int i=len-1;i>=0;i--)
    {
        if(n%v[i] == 0)
        {
            bitset<20>bit(v[i]);
            s = bit.to_string();
            int flg = 0,one = 0,zero = 0;
            for(int j=1;j<20;j++)
            {
                if(s[j] != s[j-1])++flg;
                if(flg == 1)++one;
                else if(flg == 2)++zero;
                else if(flg == 3)break;
            }
            if(flg == 2 and one==zero+1)
            {
                cout<<v[i]<<endl;
                return 0;
            }
        }
    }
    cout<<1<<endl;
    return 0;
}













