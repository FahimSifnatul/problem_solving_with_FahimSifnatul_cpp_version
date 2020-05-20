#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int t,n,i,j;
    scanf("%lld",&t);
    while(t--)
    {
      scanf("%lld",&n);
      string s[n],str;
      double a[n],len,hun,rem;
      memset(a,0,sizeof a);
      for(i=0;i<n;i++)
      {
       cin>>str;
       len=str.length();
       s[i]=str;
       hun=1.00;
       for(j=len-1;j>=0;j--)
       {
        if(str[j]!='.' and str[j]!='-')
        {
          rem=(str[j]-'0')*hun;
          a[i]+=rem;
          hun*=10.00;
        }

        //cout<<rem<<endl;
        if(str[j]=='.')
        {
            a[i]/=hun;
             //cout<<a[i]<<endl;
            hun=1;
            continue;
        }
        if(str[j]=='-')
        {
            a[i]*=-1;
        }
       }
      }
      for(i=0;i<n;i++)
      {
       for(j=0;j<n;j++)
      {
          if(a[i]<a[j])
          {
              swap(a[i],a[j]);
              swap(s[i],s[j]);
          }
      }

      }

       for(i=0;i<n;i++)
      {
       if(i<n-1)
        cout<<s[i]<<',';
      else
        cout<<s[i]<<endl;
      }
    }
    return 0;
}
