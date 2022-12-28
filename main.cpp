#include<iostream>
#include<cstdio>
using namespace std;
int countQuote(string s);
int arraySize(char *s);
int main()
{
    freopen("index.txt","r",stdin);
    char s[10000];
    scanf("%[^-1]",&s);

    int n,size2;
    bool c=false;

    n=countQuote(s);
    size2=arraySize(s)+n+2;
    char temp[size2];
    for(int i=0,j=0; s[i]!='\0'; i++,j++)
    {
        if(s[i]=='"' && !c)
        {
            temp[j]='`';
            temp[++j]='`';
            i++,j++;
            c=true;
        }
        if(s[i]=='"' && c)
        {
            temp[j]='\'';
            temp[++j]='\'';
            i++,j++;
            c=false;
        }
        temp[j]=s[i];
    }
    temp[size2-2]='\0';
    temp[size2-1]=-1;
    for(int i=0; temp[i]!=-1; i++)
    {
        cout<<temp[i];
    }

    return 0;
}
int countQuote(string s)
{
    int counT=0;
    for(int i=0; s[i]!='\0'; i++)
    {
        if(s[i]=='"')
            counT++;
    }
    return counT;
}
int arraySize(char *s){
    int counT=0;
    for(int i=0;s[i]!='\0';i++)
        counT++;
    return counT;
}
