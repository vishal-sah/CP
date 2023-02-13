#include <stdio.h>
int prime(int n)
{
    printf("prime factors is as follows : \n");
    for(int i=2; n>1; i++)
    {
        if(n%i==0)
        {
            printf("%d ",i);
            n=n/i;
            i--;
        }
    }
    return 0;

}
int main()
{
    int n;
    printf("10/02/2023 \n Aim:- WAP to print prime factors of number  \n programmer name :- Abhay Kumar \n \n");
    printf("enter the number \n");
    scanf("%d",&n);
    prime(n);
    return 0;

}