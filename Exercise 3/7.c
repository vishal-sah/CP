#include <stdio.h>

void intro(){
    printf(" 12-02-2023\n 20223250\n SHIVANSHU GUPTA\n Finding factorial\n");}


int main(void)
{
    intro();
    int n;
    printf("ENTER THE ODD SIZE OF ARRAY\n");
    scanf("%d",&n);
    int arr[n],j=0;
    printf("ENTER THE ELEMENTS OF ARRAY\n");
    for(int i=0;i<=((n-3)/2);i++)
    {
      scanf("%d",&arr[i]) ;
      arr[n-i-1]=arr[i];
    }
    scanf("%d",&arr[(n-1)/2]);
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}

