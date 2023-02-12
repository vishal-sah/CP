#include <stdio.h>

void intro(){
    printf(" 12-02-2023\n 20223250\n SHIVANSHU GUPTA\n Finding factorial\n");}
void reorder(int a[],int n)
{
    int k=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]!=0){
        a[k++]=a[i];
        }
    }
    for (int i=k;i<n;i++){
        a[i]=0;
    }
}

int main(void)
{
    intro();
    int a[] = {1,9,8,4,0,0,2,7,0,6,0};
    int n = sizeof(a) / sizeof(a[0]);

    reorder(a, n);

    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}
