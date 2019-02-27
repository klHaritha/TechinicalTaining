#include <stdio.h>
void main()
{
    int num;
    printf("enter the num:\n");
    scanf("%d",&num);
    if(num>0)
    {
        
        printf("positive num");
    }
        else if(num==0)
        {
        printf("zero");
        }
        else
        {
            printf("negative");
        }
    }
