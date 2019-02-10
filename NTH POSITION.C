#include<stdio.h>
int main()
{
    int a[100],n,l,i;
    scanf("%d%d",&n,&l);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
   printf("%d",a[l]);
   return 0;
}
