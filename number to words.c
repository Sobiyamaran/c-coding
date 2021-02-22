#include<stdio.h>
int main()
{
    int n,tdig=0,dig,pos,n1,div,flag,rem;
    printf("enter the number");
    scanf("%d",&n);
  //  printf("%d",n);
    if(n==0)
        printf("zero");
    if(n>999)
        printf("enter the number bettween 0-999");
    n1=n;
    div=1;
    while(n1>9)
    {
        rem=n1%10;
        div=div*10;
        n1=n1/10;
        tdig++;
       // printf("%d %d",n,tdig);
    }
    tdig++;
    pos=tdig;
    while(n!=0)

    {
       // printf("%d %d",n,tdig);
        dig=n/div;
        n=n%div;
        div=div/10;
        switch(pos)
        {

        case 3:
            if(dig>0)
            {
                switch(dig)
                {
                    case 1:printf("one\t");break;
                    case 2:printf("two\t");break;
                    case 3:printf("three\t");break;
                    case 4:printf("four\t");break;
                    case 5:printf("five\t");break;
                    case 6:printf("six\t");break;
                    case 7:printf("seven\t");break;
                    case 8:printf("eight\t");break;
                    case 9:printf("nine\t");break;
                }
                if(pos==3)
                   printf("hundred and\t");
            }
            break;
       case 2:
           if(dig==1){
            flag=1;
           }
           else{
            flag=0;
            switch(dig)
            {
               case 2:printf("twenty\t");break;
                case 3: printf("thirty\t");break;
                case 4:printf("forty\t");break;
                case 5:printf("fifty\t");break;
                case 6:printf("sixty\t");break;
                case 7:printf("seventy\t");break;
                case 8:printf("eighty\t");break;
                case 9:printf("ninety\t");break;


            }
           }
           break;
         case 1:
              if(flag==1)
              {
                   switch(dig)
            {
                case 0:printf("ten\t");break;
                case 1:printf("eleven\t");break;
                case 2: printf("twelve\t");break;
                case 3:printf("thirteen\t");break;
                case 4:printf("fourteen\t");break;
                case 5:printf("fifteen\t");break;
                case 6:printf("sixteeen\t");break;
                case 7:printf("seventeen\t");break;
                case 8:printf("eighteen\t");break;
                case 9:printf("nineteen\t");break;
            }
              }
            else
            {
                switch(dig)
                {
                    case 0:printf("ten\t");break;
                    case 1:printf("one\t");break;
                    case 2:printf("two\t");break;
                    case 3:printf("three\t");break;
                    case 4:printf("four\t");break;
                    case 5:printf("five\t");break;
                    case 6:printf("six\t");break;
                    case 7:printf("seven\t");break;
                    case 8:printf("eight\t");break;
                    case 9:printf("nine\t");break;
                }
            }
            break;

        }
       pos--;
    }

 return 0;
}
