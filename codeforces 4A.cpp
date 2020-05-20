#include<cstdio>

class division
{
    int w;
public:
    int input()
    {
        scanf("%d",&w);
    }
   friend void div();

}n;

void div()
{
   if(n.w%2==0 and n.w!=2)
        printf("YES\n");
   else
        printf("NO\n");
}

int main()
{
    n.input();
    div();
}
