//bismillahir rahmanir rahim
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int cs=0;
ll temp;

int digit_counting(ll b)
{
    int cnt=0;
 while(b!=0)
 {
     b/=10;
     ++cnt;
 }
 return cnt;
}

int digit_adding(string a,int i)
{
 temp=temp*10+(a[i]-'0');
}

int calculation(string a,ll b,int len,int d)
{
 ll i=0,pow,j;
 temp=0;
 while(d!=0)
 {
     --d;
     j=1;
     pow=1;
     while(j<=d)
     {
        pow*=10;
        ++j;
     }
     temp+=(a[i]-'0')*pow;
     ++i;
 }
 while(i<len)
 {
     while(temp<b)
     {
         digit_adding(a,i);
         //cout<<temp<<endl;
         ++i;
         if(i==len)
            break;
     }
     temp%=b;
 }
 temp%=b;
 if(temp!=0)
    printf("Case %d: not divisible\n",++cs);
 else
    printf("Case %d: divisible\n",++cs);
}

int main()
{
    int t;
    ll b;
    scanf("%d",&t);
    while(t--)
    {
     string a;
     cin>>a;
     int len=a.size();
     scanf("%lld",&b);
     int d=digit_counting(b);
     if(b<0)
        b*=-1;
     if(a[0]=='-')
        a[0]='0';
        //cout<<d<<endl;
     if(((a[len-1]-'0')%2!=0 and b%2==0) or (len<d and a!="0"))
     {
       printf("Case %d: not divisible\n",++cs);
     }
     else if(a=="0")
     {
       printf("Case %d: divisible\n",++cs);
     }
     else
     {
       calculation(a,b,len,d);
     }
    }
    return 0;
}
