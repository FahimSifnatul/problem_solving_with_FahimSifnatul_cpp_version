//bismillahir rahmanir rahim
#include<cstdio>
#include<iostream>
#include<bitset>
#include<cmath>
using namespace std;
#define ll long long int
int main()
{
    ll sc1[35],sc2[35],x = 4294967295;
    sc1[0] = 1;
    for(int i=1;i<33;i++)
        sc1[i] = (sc1[i-1]<<1);
    for(int i=0;i<33;i++)
        sc2[i] = (sc1[i] ^ x);
    int t;
    scanf("%d",&t);
    for(int k=1;k<=t;k++)
    {
      ll n;
      scanf("%lld",&n);
      bitset<35>BIT_N(n) ;
      string str = BIT_N.to_string();
      int pos_start = log2(n);
      int one, zero = pos_start+1, o=0, z=0;
      bool check = false;
      for(int i=34;i>=34-pos_start;i--)
      {
          if(str[i] == '1')
          {
            one = 34-i;
            ++o;
            check = true;
          }
          else if(str[i] == '0' and check == true)
          {
            zero = 34-i;
            break;
          }
      }
      n |= sc1[zero];
      n &= sc2[one];
      for(int i=0;i<one;i++)
      {
        if(o > 1) n |= sc1[i],--o;
        else n &= sc2[i];
      }
      printf("Case %d: ",k);
      printf("%lld\n",n);
    }
    return 0;
}
