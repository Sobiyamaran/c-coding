#include<stdio.h>
void main()
{
   int i,j,n,count=0;
   printf("enter the no.element");
   scanf("%d",&n);
   int a[n];
   for(i=0;i<n;i++)
   {
       scanf("%d",&a[i]);
   }
   for(i=0;i<n;i++)
   {
       for(j=i+1;j<n;j++)
       {
           if(a[i]==a[j])
           {
               count++;
           }
       }
   }
   printf("%d",count);
}
