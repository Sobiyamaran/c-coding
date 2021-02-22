int sum=0,r;
int sum_digit(int n)
{
    if(n)
    {
         r=n%10;
         sum=sum+r;
        sum_digit(n/10);
    }

    return sum;
}
#include<stdio.h>
void main()
{
    int n,res;
    printf("enter the number");
    scanf("%d",&n);
    res=sum_digit(n);
    printf("%d",res);

}
