#include<stdio.h>
#include<conio.h>
void main()
{
    char a[10],b[10],c[10];
    gets(a);
    int i,j=0,k=0;
    for(i=0;a[i]!='\0';i++)
    {
        if(i%2==0)
        {
           b[j]=a[i];
           j++;
        }
        else
        {
            c[k]=a[i];
            k++;
        }
    }
    for(i=0;i<j;i++)
    {
        printf("%c",b[i]);
    }
    printf(" ");
    for(i=0;i<k;i++)
    {
        printf("%c",c[i]);
    }
    getch();
}
