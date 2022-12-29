#include<iostream>
#include<cstdio>

using namespace std;
int main()
{   char c;
    int flag=0;
    freopen("index.txt","r",stdin);
    while(scanf("%c",&c)!=EOF){
        if(c=='"' && !flag){
            printf("``");
            flag++;
        }
        else if(c=='\'' && flag){
            printf("''");
            flag=0;
        }
        else{
            printf("%c",c);
        }
    }
    return 0;

}
