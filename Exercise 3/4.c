 
  #include <stdio.h>

void intro(){
    printf(" 10-02-2023\n 20223318\n VIVEK CHAURASIA\n Finding factorial\n");}
void reorder(int a[],int n,int k)
{int p=0;int t=0;
int a1[n-k];
    for(int i=0;i<n;i++)
    {
        if(i>=k){
        a[p++]=a[i];
        }
  else
  a1[t++]=a[i];
    }
    for (int j=0;j<k;j++){
        a[p++]=a1[j];
    }
}

int main(void)
{
    intro();
    int a[] = {1,2,3,4,5,6,7};
    int n = sizeof(a) / sizeof(a[0]);
    int k=2;

    reorder(a, n,k);

    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}