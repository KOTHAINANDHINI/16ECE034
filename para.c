#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    char a[10];
   scanf("%[^\n]",a);
    int l,i;
    l=1;
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]=='.')
        l++;
    }
     printf("%d",l);
    getch();
}
