#include<cstdio>
#include<string>
#include<iostream>
using namespace std;

int main()
{
    int t;
    scanf("%d",&t);
    string s;
    while(t--)
    {
      cin>>s;
      int len=s.length();
      int te=s[len-1]-'0';
      //cout<<te<<'\n';
      if(te%2!=0)
        printf("NO\n");
      else
      {
        te=(s[len-3]-'0')*100+(s[len-2]-'0')*10+s[len-1]-'0';
        if(te%8==0)
            printf("YES\n0\n");
        else
            printf("NO\n");
      }
    }
    return 0;
}
