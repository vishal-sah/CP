#include <stdio.h>
int right_shift(int* a, int* b, int* c)
{
    int temp = *c;
    *c = *b;
   * b = *a;
    *a = temp;
    return 0;
}
int main()
{
    int a, b, c;
    printf("10/02/2023 \n Aim:- WAP to right shift the three data \n programmer name :- Abhay Kumar \n \n");
    printf("enter three data\n");
    scanf("%d%d%d", &a, &b, &c);
    printf("before  shifting\n %d %d %d\n", a, b, c);

    right_shift(&a, &b, &c);
    printf("after right shifting\n %d %d %d\n", a, b, c);

    return 0;
}