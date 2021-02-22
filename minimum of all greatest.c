#include<stdio.h>
void main()
{
    int a[50],b[50];
    int i,j,n,min;
    printf("enter the no of elements");
    scanf("%d",&n);
    printf("enter the numbers");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        min=a[n-1];
        for(j=0;j<n;j++)
        {

           if(a[j]>a[i])
           {
              if(a[j]<min)
              min=a[j];
           }

        }
         printf("%d>%d\t",a[i],min);


    }
}
