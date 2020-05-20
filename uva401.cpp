#include<cstdio>
#include<string>
#include<iostream>
#include<algorithm>
using namespace std;
int pal(string s2,string s1,int flag);

int main()
{
  int len,flag;
  string s1,s2;
  while(!cin.eof() and cin>>s1)
  {
    s2=s1;
    flag=0;
    reverse(s2.begin(),s2.end());
    if(s2==s1)
        flag=5;
    pal(s2,s1,flag);

  }
 return 0;
}

int pal(string s2,string s1,int flag)
{
    int len=s1.length();
    string s3;
    s3=s2;
    reverse(s2.begin(),s2.end());
    for(int i=0;i<len;i++)
    {
        switch(s1[i])
        {
        case 'A':
            s1[i]='A';
            break;
        case 'E':
            s1[i]='3';
            break;
        case 'H':
            s1[i]='H';
            break;
        case 'I':
            s1[i]='I';
            break;
        case 'J':
            s1[i]='L';
            break;
        case 'L':
            s1[i]='J';
            break;
        case 'M':
            s1[i]='M';
            break;
        case 'O':
            s1[i]='O';
            break;
        case 'S':
            s1[i]='2';
            break;
        case 'T':
            s1[i]='T';
            break;
        case 'U':
            s1[i]='U';
            break;
        case 'V':
            s1[i]='V';
            break;
        case 'W':
            s1[i]='W';
            break;
        case 'X':
            s1[i]='X';
            break;
        case 'Y':
            s1[i]='Y';
            break;
        case 'Z':
            s1[i]='5';
            break;
        case '1':
            s1[i]='1';
            break;
        case '2':
            s1[i]='S';
            break;
        case '3':
            s1[i]='E';
            break;
        case '5':
            s1[i]='Z';
        case '8':
            s1[i]='8';
            break;
        default:
            s1[i]='*';
        }
    }
    reverse(s1.begin(),s1.end());
    if(s1==s2)
        flag+=2;
    if(flag==0)
    cout<<s2<<" -- is not a palindrome.\n"<<endl;
    else if(flag==5)
    cout<<s2<<" -- is a regular palindrome.\n"<<endl;
    else if(flag==2)
    cout<<s2<<" -- is a mirrored string.\n"<<endl;
    else if(flag==7)
    cout<<s2<<" -- is a mirrored palindrome.\n"<<endl;
}









