#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    char str1[50],str2[50],c='*';
    int i,j;
   // printf("enter the string");
    scanf("%s",&str1);
   // printf("enter the sec string");
    scanf("%s",&str2);

    for(i=0;str1[i]!='\0';i++)
    {
        for(j=0;str2[j]='\0';j++)
        {
            if(str1[i+j]==str2[j])
            {
               str1[i+j]=c;
               str2[j]=c;
            }

        }

    }
    for(i=0;str1[i]!='\0';i++)
    {
        if(str1[i]!=c)
        {
            printf("%c",str1[i]);
        }
    }
    for(i=0;str2[i]!='\0';i++)
    {
        if(str2[i]!=c)
        {
            printf("%c",str2[i]);
        }
    }



    return 0;
}
