#include<stdio.h>

void main()
{
    int i,n,count,num,j,temp;
    printf("enter the number of elemennt");
    scanf("%d",&n);
    int a[n];
    printf("elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
            }
        }
    }
    i=0;
    for(i=0;i<n;i=j)
    {
        num=a[i];
        count=1;
        for(j=i+1;j<n;j++)
        {
        if(a[j]!=num)
            break;
        else
            count++;
        }
        printf("%d->%d\n",num,count);
    }
}
