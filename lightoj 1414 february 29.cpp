//bismillahir rahmanir rahim
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,cs=1;
    scanf("%d",&t);
    cin.ignore();
    map<string,int>month;
    month["January"]=1;
    month["February"]=2;
    month["March"]=3;
    month["April"]=4;
    month["May"]=5;
    month["June"]=6;
    month["July"]=7;
    month["August"]=8;
    month["September"]=9;
    month["October"]=10;
    month["November"]=11;
    month["December"]=12;
    string s1,s2;
    int d1,d2;
    long long int m1,m2,temp,cnt;
    char c;
    while(t--)
    {
     cin>>s1;
     scanf("%d,%lld",&d1,&m1);
     cin>>s2;
     scanf("%d,%lld",&d2,&m2);
     cnt=(m2/4-m2/100+m2/400)-((m1-1)/4-(m1-1)/100+(m1-1)/400);
     if(m1%4==0 and month[s1]>month["February"])
     {
      --cnt;
     }
     if(m2%4==0 and month[s2]<=month["February"])
     {
         if(month[s2]==month["February"] and d2<29)
         --cnt;
     }
     cout<<cnt<<endl;
     ++cs;
    }
}
