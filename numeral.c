#include<stdio.h>
#include<conio.h>
void main()
{
    char a[100],i,l=0,m=0;
    gets(a);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]>='0'&&a[i]<='9')
        {
            m++;
        }
    }
    if(m>0)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    getch();
}
        
        
