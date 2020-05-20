#include<bits/stdc++.h>
#define ll unsigned long long int
using namespace std;
int sherlock[10],moriarty[10],n,hi=0;
string s,m;

int digit_counting(int i)
{
    if(i == n)return 0;
    ++sherlock[s[i]-'0'];
    ++moriarty[m[i]-'0'];
    hi = max(hi,m[i] - '0');
    digit_counting(i+1);
}

int m_min_flicks(int i)
{
    if(i == 10)return 0;
    int ans = m_min_flicks(i+1);
    if(moriarty[i] < sherlock[i])
    {
        ans += sherlock[i] - moriarty[i];
    }
    else if(i > 0)
    {
        moriarty[i-1] += moriarty[i] - sherlock[i];
    }
    return ans;
}

int s_max_flicks(int i)
{
    if(i == hi+1)return 0;
    int ans = s_max_flicks(i+1);
    if(moriarty[i] >= sherlock[i-1])
    {
        ans += sherlock[i-1];
        moriarty[i-1] += moriarty[i] - sherlock[i-1];
    }
    else ans += moriarty[i-1];
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int mi = 0,ma = 0;
    cin>>n>>s>>m;
    digit_counting(0);
    mi = m_min_flicks(0);
    ma = s_max_flicks(0);
    cout<<mi<<endl<<ma<<endl;
    return 0;
}





















