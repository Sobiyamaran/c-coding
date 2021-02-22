
//only positive
#include<stdio.h>
void main()
{
    int a[10];
    int i,j,n,count=0;
    printf("enter the number");
    scanf("%d",&n);
   // while(n>0)
    //{
    //    r=n%10;
     //   sum=sum*10+r;
      //  n=n/10;
    //}
printf("enter the elements");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
   /* for(i=0;i<n;i++)
    b[a[i]]++;
    for(i=0;i<n;i++)
     if(b[i]!=0)
        printf("%d->%d\n",i,b[i]);
} */

for(i=0;i<n;i++)
{

    for(j=0;j<i;j++)
    {

        if(a[i]==a[j])
            count++;
          break;
    }
    if(i==j)
    {
        printf("%d-%d",a[i],count);
    }
}
}

