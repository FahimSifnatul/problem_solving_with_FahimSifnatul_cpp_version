#include<bits/stdc++.h>
using namespace std;

int main()
{
  char s[200],str[200];
  scanf("%s",s);
  int len=strlen(s),i,j=0;
  for(i=0;i<len;i++)
  {
     if(s[i]>='A' and s[i]<='Z')
        s[i]=tolower(s[i]);
     if(s[i]!='a' and s[i]!='e' and s[i]!='i' and s[i]!='o' and s[i]!='u' and s[i]!='A' and s[i]!='E' and s[i]!='I' and s[i]!='O' and s[i]!='U' and s[i]!='Y' and s[i]!='y')
        {
           str[j]=s[i];
           ++j;
        }
  }
  str[j]='\0';
  len=strlen(str);
  for(i=0;i<len;i++)
  {
      printf(".%c",str[i]);
  }

  return 0;

}
