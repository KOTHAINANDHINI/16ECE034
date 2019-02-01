#include<stdio.h>
#include<conio.h>
void main()
{
    char a[100];
    int i,l=1;
    scanf("%[^\n]",a);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]==' ')
        l++;
    }
    printf("%d",l);
    getch();
}
