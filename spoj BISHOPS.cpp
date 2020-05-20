#include<bits/stdc++.h>
#define ll unsigned long long int
using namespace std;
string s,temp;

int minus_two(int i,bool carry)
{
    if(!carry)
    {
        if(temp[i] >= '2')
        {
            temp[i] -= 2;
        }
        else if(temp[i] == '1')temp[i] = '9',carry = 1;
        else if(temp[i] == '0')temp[i] = '8',carry = 1;
    }
    else
    {
        if(temp[i] >= '1')
        {
            --temp[i];
            carry = 0;
        }
        else temp[i] = '9';
    }
    if(!carry)return 0;
    minus_two(i-1,carry);
}

int add(int i,bool carry)
{
    if(i == -1)return 0;
    int t = s[i] + temp[i] - 48*2;
    if(carry)++t;
    if(t > 9)
    {
        s[i] = t - 10 + '0';
        carry = 1;
    }
    else s[i] = t + '0',carry = 0;
    add(i-1,carry);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    while(cin>>s)
    {
        if(s == "1" or s == "2")
        {
            cout<<s<<endl;
            continue;
        }
        s = '0' + s;
        temp = s;
        int len = s.size();
        minus_two(len-1,0);
        add(len-1,0);
        if(s[0] == '0')s.erase(0,1);
        cout<<s<<endl;
    }
    return 0;
}














