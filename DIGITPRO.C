#include<stdio.h>
#include<conio.h>
void main()
{
    int a,sum=1,rem;
    scanf("%d",&a);
    while(a)
    {
        rem=a%10;
        a=a/10;
       sum=sum*rem;
    }
  printf("%d",sum);
    getch();
}
