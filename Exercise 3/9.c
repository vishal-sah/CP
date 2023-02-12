#include <stdio.h>

void intro(){
    printf(" 12-02-2023\n 20223250\n SHIVANSHU GUPTA\n Finding factorial\n");}
void makematrix(int k,int arr[k][k])
{printf("ENTER THE MATRIX ELEMENTS OF N*N\n");
    for(int i=0;i<k;i++)
    {
        for(int j=0;j<k;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
}
void sum(int n,int arr1[n][n],int arr2[n][n]){
int arr3[n][n];
for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            arr3[i][j]=arr1[i][j]+arr2[i][j];
        }
    }printf("The sum is \n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d ",arr3[i][j]);
        }printf("\n");
    }
}
void subs(int n,int arr1[n][n],int arr2[n][n]){
int arr3[n][n];
for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            arr3[i][j]=arr1[i][j]-arr2[i][j];
        }
    }printf("The subs is \n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d ",arr3[i][j]);
        }printf("\n");
    }
}
int main(void)
{
    intro();
    int n;
    printf("ENTER THE SIZE OF N*N MATRIX\n");
    scanf("%d",&n);
    int arr1[n][n],arr2[n][n];
    makematrix(n,arr1);
    makematrix(n,arr2);
    sum(n,arr1,arr2);
    subs(n,arr1,arr2);


    return 0;
}


