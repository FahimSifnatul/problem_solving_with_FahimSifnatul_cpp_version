#include<bits/stdc++.h>
using namespace std;
#define sieve_limit 44750
#define ll unsigned long long int
vector<ll>prime;
bool check[sieve_limit];
int n;
ll a[150005],b[150005];

int sieve()
{
 int len = 212;
 for(int i=3;i<=len;i+=2)
 {
     if(check[i] == false)
     {
         for(int j=i*i;j<=sieve_limit;j+=2*i)
            check[j] = true;
     }
 }
 prime.push_back(2);
 for(int i=3;i<=sieve_limit;i+=2)
 {
    if(check[i] == false)
        prime.push_back(i);
 }
}

int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(0);
 sieve();
 cin>>n;
 for(int i=0;i<n;i++)
 {
    cin>>a[i]>>b[i];
 }
 for(int i=0;i<4650;i++)
 {
    bool check = true;
    for(int j=0;j<n;j++)
    {
       if((a[j]*b[j])%prime[i] != 0)
       {
           check = false;
           break;
       }
    }
    if(check == true)
    {
        cout<<prime[i]<<endl;
        return 0;
    }
 }
 cout<<-1;
 return 0;
}

















