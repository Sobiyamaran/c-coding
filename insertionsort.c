#include<stdio.h>
void main()
{
    int n,temp,j,i;
    int a[50];
    printf("enter the no of element");
    scanf("%d",&n);
    printf("enter the elements");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=1;i<=n-1;i++)
    {
        temp=a[i];
        j=i-1;
        while(j>=0&&temp<=a[j])
        {
             a[j+1]=a[j];
            j--;
        }
        a[j+1]=temp;
      // printf("%d ",a[j]);
    }
    for(i=0;i<n;i++)
      printf("\n%d\n",a[i]);
}
