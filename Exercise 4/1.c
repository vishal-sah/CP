  //NUMBER OF CHARACTER ME SPACE AUR'/0' ISKO BHI COUNT KRKE INPUT DENA.
  #include<stdio.h>
#include<string.h>
char arr[];int n;
int main()
{printf("DATE:02/02/2023\n");
printf("NAME OF PROGRAMMER: VIVEK CHAURASIA\n");
printf("TO COUNT NUMBER OF WORDS\n");
printf("ENTER NUMBER OF CHARACTERS");
scanf("%d",&n);
int d=0;
for(int a=0;a<n;a++)
{
    scanf("%c",&arr[a]);
}
for(int b=0;b<n;b++)
{
    if(arr[b]==' '||b==n-1)
    d++;
}
printf("%d",d);
}