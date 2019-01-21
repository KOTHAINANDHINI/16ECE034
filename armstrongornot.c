#include<stdio.h>
#include<conio.h>
int main()
{
  int a,i,t,rem,sum=0,c=1,l=0;
  scanf("%d",&a);
  t=a;
  while(t)
  {
      l++;
      t=t/10;
  }
  t=a;
  while(t)
  {
      c=1;
      rem=t%10;
      for(i=0;i<l;i++)
      {
          c=c*rem;
      }
      sum=sum+c;
      t=t/10;
  }
  if(sum==a)
  printf("yes");
  else
  printf("no");
  return 0;
  }
