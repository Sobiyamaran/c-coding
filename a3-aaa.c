#include<stdio.h>
void main()
{

    char str[50];
    char s;
    int i=0,j,rem;
    printf("enter the string");
    scanf("%s",&str);
    while(str[i]!='\0')
    {
        if((str[i]>=65&&str[i]<=90)||(str[i]>=97&&str[i]<=122))
        {
            s=str[i];
        }

        else
        {
            //printf("%d..%c..%d\n",i,str[i],str[i]);
            int sum=0;
            while(str[i]>='0'&&str[i]<='9'&&str[i]!='\0')


            {
               // rem=str[i]%10;
                sum= sum*10+str[i]-48;
                i++;
            }
             i--;
            for(j=0;j<sum;j++)
            {
                printf("%c",s);
            }
        }
        i++;


    }
}
