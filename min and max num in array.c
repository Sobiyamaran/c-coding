#include<stdio.h>

void main(void) {
    int a[20];
    int n,i,min,max;
    printf("enter the n value");
    scanf("%d",&n);
    printf("enter elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    min=a[0];
    max=a[0];
    for(i=1;i<n;i++)
    {

            if(a[i]<min)
            {
                min=a[i];
            }
            if(a[i]>max)
            {
                max=a[i];
            }

    }
    printf("minimum number is:%d\n",min);
    printf("maximum number is:%d\n",max);
}
