#include<stdio.h>
#include<conio.h>
void main()
{
   int a,b,c,i,k=0;
   scanf("%d%d",&a,&b);
   c=a*b;
   for(i=2;i<a||i<b;i++)
   {
       if(c%i==0&&i*i==c)
       {
           printf("yes");
       }
       else
       {
           k++;
       }
   }
   if(k>0)
   {
       printf("no");
   }
   getch();
}
