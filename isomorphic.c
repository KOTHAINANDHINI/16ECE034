#include<stdio.h>
#include<conio.h>
void main()
{
    char a[10],b[10];
    int k=0,l=0,i,j,c1=0,c2=0;
    gets(a);
    gets(b);
    for(i=0;a[i]!='\0';i++)
    {
        c1++;
    }
    for(i=0;b[i]!='\0';i++)
    {
        c2++;
    }
    if(c1==c2)
    {
        for(i=0;i<c1;i++)
        {
            if(a[i]==a[i+1])
            {
                a[i]='$';
            }
            if(b[i]==b[i+1])
            {
                b[i]='$';
            }
        }
    for(i=0;i<c1;i++)
    {
        if(a[i]=='$')
        k++;
        if(b[i]=='$')
        l++;
    }
    if(k==l)
    printf("yes");
    else
    printf("no");
    }
    else
    printf("no");
    getch();
}
