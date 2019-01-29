#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    char a[10],b[10];
   scanf("%s",a);
   scanf("%s",b);
    int l,k,i;
    l=0;
    k=0;
    for(i=0;a[i]!='\0';i++)
    {
        l++;
    }
     for(i=0;b[i]!='\0';i++)
    {
        k++;
    }
    if(l==k)
    {
        printf("%s",a);
    }
    else if(l>k)
    {
        printf("%s",a);
    }
    else
    {
        printf("%s",b);
    }
    getch();
}
