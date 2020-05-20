#include<bits/stdc++.h>
using namespace std;
deque<int>d;

int main()
{
 int t,n,m,cs=1,num;
 string s[]={"pushLeft","pushRight","popLeft","popRight","The queue is full","The queue is empty","Pushed in ","left: ","right: ","Popped from "},str;
 scanf("%d",&t);
 while(t--)
 {
   scanf("%d%d",&n,&m);
   for(int i=0;i<m;i++)
   {
    cin>>str;
    if(str==s[0] or str==s[1])
        cin>>num;
    if(i==0)
     printf("Case %d:\n",cs);
    if(str==s[0] and d.size()<n)
    {
      d.push_front(num);
      cout<<s[6]<<s[7]<<num<<endl;
    }
    else if(str==s[1] and d.size()<n)
    {
      d.push_back(num);
      cout<<s[6]<<s[8]<<num<<endl;
    }
    else if(str==s[2] and d.size()>0)
    {
      cout<<s[9]<<s[7]<<d.front()<<endl;
      d.pop_front();
    }
    else if(str==s[3] and d.size()>0)
    {
      cout<<s[9]<<s[8]<<d.back()<<endl;
      d.pop_back();
    }
    else if(d.size()==n)
    {
      cout<<s[4]<<endl;
    }
    else if(d.size()==0)
    {
      cout<<s[5]<<endl;
    }
   }
   d.clear();
   ++cs;
 }
 return 0;
}
