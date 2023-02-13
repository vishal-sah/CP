#include <stdio.h>
int bin(int n){
    if(n==0){
        return 0;
    }
    else{ 
        return n%2 +10*bin(n/2);
    }
}
int main()
{
    int n,ans;
    printf("10/02/2023 \n Aim:- WAP to convert decimalnumber to binary number \n programmer name :- Abhay Kumar \n \n");
    printf("enter the number\n");
    scanf("%d",&n);
ans=bin(n);
    printf("binary conversion is  : %d",ans);


    return 0;
}