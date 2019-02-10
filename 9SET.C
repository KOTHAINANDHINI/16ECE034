#include<stdio.h>
#include<conio.h>
void main()
{
   int a;
   char c;
   int b;
   scanf("%d%c%d",&a,&c,&b);
   if(c=='/')
   {
       printf("%d",a/b);
   }
   if(c=='%')
   {
       printf("%d",a%b);
   }
   getch();
}
