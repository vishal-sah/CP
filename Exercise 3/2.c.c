#include <stdio.h>

void intro(){
    printf(" 12-02-2023\n 20223250\n SHIVANSHU GUPTA\n Finding factorial\n");
}
int fact(int n)
{
    if(n==1||n==0)
        return 1;
    else
        return n*fact(n-1);
}
int main(){
    intro();
    int n;
    printf("ENTER THE NUMBER OF WHICH FACTORIAL YOU WANT\n");
    scanf("%d",&n);
    printf("THE FACTORIAL OF %d IS %d",n,fact(n));
    return 0;
}
