#include <stdio.h>
int power(int* a, int n){
    int k=*a;
    for(int i=1; i<=n-1; i++)
    {
        *a=k * *a;
    }
    return 0;

}

int main()
{
    printf("10/02/2023 \n Aim:- WAP to evaluate power function \n programmer name :- Abhay Kumar \n \n");
    int a,n ;
     printf("enter the base value and power value \n");
    scanf("%d%d",&a,&n);
    
   power(&a,n);
     printf("answer is %d",a);
     return 0;
  }
