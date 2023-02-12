#include<stdio.h>

int main()
{
    printf("THIS PROGRAM IS DONE BY SHIVANSHU GUPTA,20223250\n");
    for(int i=0;i<=4;i++)
    {
        for(int j=0;j<=4;j++)
        {
            if(j<=i)
                printf("%c",'A'+j);
            else
                printf(" ");
        }printf("\n");
    }

    return 0;
}
