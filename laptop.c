#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
int n,i;
char a[10];
gets(a);
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("%s",a);
}
getch();
}
