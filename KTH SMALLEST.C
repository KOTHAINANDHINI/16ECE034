#include<stdio.h>
int main()
{
    int a[100],n,k,i,j,p,c=a[0];
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
   for(j=0;j<n+1-k;j++)
   {
       c=a[0];
      for(i=0;i<n;i++)
     {
         if(a[i]>c)
         {
           c=a[i];
           p=i;
         }
     }
      a[p]=0;
          
   }
   printf("%d",c);
   return 0;
}
