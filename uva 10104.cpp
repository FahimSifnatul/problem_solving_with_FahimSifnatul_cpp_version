#include<cstdio>
int a,b,x,y,g;
int egcd(int a, int b, int *x, int *y)
{
    if (b == 0)
    {
        *x = 1;
        *y = 0;
        return a;
    }
    int x1, y1;
    int gcd = egcd(b,a%b, &x1, &y1);
    *y = x1 - (a/b) * y1;
    *x = y1;
    return gcd;
}
int main()
{
    while(scanf("%d %d", &a, &b) != EOF)
    {
        g = egcd(a, b, &x, &y);
        printf("%d %d %d\n", x, y, g);
    }
    return 0;
}
