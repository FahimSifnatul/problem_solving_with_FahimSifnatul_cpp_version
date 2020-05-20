#include<iostream>
#include<cstdio>
#include<stack>
using namespace std;

int main()
{
 int flag=0,v,t,q,mi,in;
 stack<int>stk,temp;
 scanf("%d",&t);
 while(t--)
 {
  scanf("%d",&q);
  while(q--)
  {
      scanf("%d",&v);
      if(v==1)
      {
        scanf("%d",&v);
        stk.push(v);
        flag=0;
      }
      else if(v==2)
      {
        if(stk.empty())
            printf("-1 ");
        else
        {
            cout<<stk.top()<<" ";
            stk.pop();
        }
      }
      else if(v==3)
      {
        if(stk.empty())
            printf("-1 ");
        else
        {
            while(!stk.empty())
            {
              in=stk.top();
              temp.push(in);
              if(flag==0)
              {
                flag=1;
                mi=stk.top();
              }
              else
                mi=min(mi,stk.top());
              stk.pop();
            }
            cout<<mi<<" ";
            while(!temp.empty())
            {
                in=temp.top();
              stk.push(in);
              temp.pop();
            }
            flag=0;
        }
      }
  }
 }
 return 0;

}
