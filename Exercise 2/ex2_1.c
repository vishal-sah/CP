#include <stdio.h>
int sumdiv(int a)
{
    int k = 0;
    for (int i = 1; i < a; i++)
    {
        if (a % i == 0)
        {
            k = k + i;
        }
    }
    return k;
}

int main()
{
    int n;
    printf("10/02/2023 \n Aim:- WAP to print perfect numbers \n programmer name :- Abhay Kumar \n \n");
    printf("enter the number ");
    scanf("%d", &n);
    for (int j = 1; j <= n; j++)
    {
        if (sumdiv(j) == j)
        {
            printf("%d ", j);
        }
    }


    return 0;
}