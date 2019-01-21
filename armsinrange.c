#include<stdio.h>
#include<conio.h>
int main()
{
  int a,b,i,t,rem,sum=0,c=1,l=0,f=0,j;
  scanf("%d%d",&a,&b);
  for(i=a;i<=b;i++)
  {
  t=i;
  sum=0;
  l=0;
  while(t)
  {
      l++;
      t=t/10;
  }
  t=i;
  while(t)
  {
      c=1;
      rem=t%10;
      for(j=0;j<l;j++)
      {
          c=c*rem;
      }
      sum=sum+c;
      t=t/10;
  }
  if(sum==i)
  {
   
      printf("%d\t",i);
  }
  }
  return 0;
  }
