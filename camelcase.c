#include<stdio.h>
#include<conio.h>
void main()
{
    char a[100];
    int i,j;
    scanf("%[^\n]",a);
    for(i=0;a[i]!='\0';i++)
    {
            if(a[0]>='a'&&a[0]<='z')
            {
                a[0]=a[0]-32;
            }
        if(a[i]==' ')
        {
            if(a[i+1]>='a'&&a[i+1]<='z')
            {
                a[i+1]=a[i+1]-32;
            }
        }
    }
    for(i=0;a[i]!='\0';i++)
    {
        printf("%c",a[i]);
    }
    getch();
}
