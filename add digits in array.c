#include<stdio.h>
void main()
{
    long long int sum1=0,sum2=0;


    int d1,d2,i,j,count,r,n,rem,div;
    int a[50],b[50],res[50];

    printf("number of digit d1:");
    scanf("%d",&d1);
    printf("enter the number");
    for(i=0;i<d1;i++)
    {
        scanf("%d",&a[i]);

    }

     printf("number of digit d2:");
    scanf("%d",&d2);
    printf("enter the number");
    for(i=0;i<d2;i++)
    {
        scanf("%d",&b[i]);
    }
    i=0;
    while(i<d1)
    {
        sum1=sum1*10+a[i];
        i++;
    }
    printf("%d\n",sum1);
    j=0;
    while(j<d2)
    {
        sum2=sum2*10+b[j];
        j++;
    }
    r=sum1+sum2;
    printf("%d\n",r);
     n=r;
    div=1;
    while(n>9)
    {
        rem=n%10;
        div=div*10;
        n=n/10;
    }
    i=0;
    while(r!=0)
    {
      n=r/div;
      r=r%div;
      res[i]=n;
      div=div/10;
      printf("%d\t",res[i]);
      i++;
    }


}
