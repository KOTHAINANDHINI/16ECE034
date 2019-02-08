#include<stdio.h>
int main()
{
    char a[100];
    scanf("%s",a);
    int i,j,l=0,p;
    for(i=0;a[i]!='\0';i++)
    {
        l++;
    }
    p=l/2;
    if(l%2==0)
    {
        a[p]='*';
        a[p-1]='*';
    }
    else
    {
        a[p]='*';
    }
    for(i=0;a[i]!='\0';i++)
    {
        printf("%c",a[i]);
    }
    return 0;
    }
