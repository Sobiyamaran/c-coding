#include<stdio.h>
void main()
{
    int a[20];
    int n,i,j,temp,min;
    printf("enter the no of elements");
    scanf("%d",&n);
    printf("enter the elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);

    }
   for(i=0;i<(n-1);i++)
    {

        min=i;

        for(j=i+1;j<n;j++)
        {
            if(a[min]>a[j]);
                min=j;


          if(min!=i)
          {
            temp=a[i];
            a[i]=a[min];
            a[min]=temp;
          }
        }
    }
   for(i=0;i<n;i++)
    printf("\n%d ",a[i]);


}
