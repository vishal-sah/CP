 #include <stdio.h>

void intro(){
    printf(" 10-02-2023\n 20223318\n VIVEK CHAURASIA\n Finding factorial\n");}
void reorder(int a[],int n)
{
    int k=0;int d=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]!=0){
        a[k++]=a[i];
        }
        
    }
    for (int i=0;i<n;i++)
       {if(i<=k)
        printf("%d ",a[i]);
        else
        printf("0 "); 
    }
}

int main(void)
{
    intro();
    int a[] = {1,0,1,0,0,0,1,1,0,1,0};
    int n = sizeof(a) / sizeof(a[0]);

    reorder(a, n);

   
    return 0;
}