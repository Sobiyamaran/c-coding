#include<stdio.h>
void main()
{
    int n,k,i,j,count=0;
    int a[50];
    printf("enter no of bits");
    scanf("%d",&n);
    printf("enter the bits");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("consecutive");
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        if(a[i]==1)
        {
            count++;
        }
        else
            count=0;
        if(count==k)
        {
            n++;
            for(j=n-1;j>i;j--)
            {
                a[j]=a[j-1];
            }
            a[i+1]=0;
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }

}
