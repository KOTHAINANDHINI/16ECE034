#include<stdio.h>
#include<conio.h>
void main()
{
  int a,l;
  scanf("%d",&a);
  l=a/2;
  if(a%2==0)
  {
      if(l%2==0)
  {
    while(l%2==0)
    {
      l=l/2;
     }   
    printf("%d",l);
  }
  else
  {
      printf("%d",l);
  }
  }
  else
  {
      printf("%d",a);
  }
  getch();
}
