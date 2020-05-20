#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    scanf("%d",&t);
 for(int k=1;k<=t;k++)
 {
        string s1,s2;
        cin>>s1>>s2;
        int dec[4],bin[4],len=s1.length(),temp = 0,j=3,p=0;
    for(int i=len-1;i>=0;i--)
    {
        if(s1[i] == '.')
        {
          dec[j] = temp;
          --j;
          temp = 0;
          p = 0;
          //cout<<dec[j+1]<<endl;
        }
        else
        {
            int pow = 1;
            for(int l=1;l<=p;l++)pow *= 10;
            temp += (s1[i]-'0')*pow;
            ++p;
        }
    }
    dec[j] = temp;
    //cout<<dec[j]<<endl;
    temp = 0;
    len = s2.length();
    j = 3;
    for(int i=len-1,p=0;i>=0;i--)
    {
        if(s2[i] == '.')
        {
          bin[j] = temp;
          --j;
          temp = 0;
          p = 0;
        }
        else
        {
            int pow = 1;
            for(int l=1;l<=p;l++)pow *=10;
            temp += (s2[i]-'0')*pow;
            ++p;
        }
    }
    bin[j] = temp;
    printf("Case %d: ",k);
    bool flg = true;
    for(int i = 0;i<4;i++)
    {
        temp = dec[i];
        int p = 0;
        int check = 0;
        while(temp != 0)
        {
            int pow = 1;
            for(int l=1;l<=p;l++)pow *=10;
            check += (temp%2)*pow;
            //cout<<check<<endl;
            temp /= 2;
            ++p;
        }
        //cout<<bin[i]<<' '<<check<<endl;
        if(bin[i] != check)
        {
            flg = false;
            break;
        }
    }
    flg == true ? printf("Yes\n") : printf("No\n");
  }
  return 0;
}



/*
2
192.168.0.100
11000000.10101000.00000000.11001000
*/









