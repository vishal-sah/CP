 //NUMBER OF CHARACTER ME SPACE AUR'/0' ISKO BHI COUNT KRKE INPUT DENA.
 #include<stdio.h>
#include<string.h>
int main()
{
    printf("DATE:02/02/2023\n");
printf("NAME OF PROGRAMMER: VIVEK CHAURASIA\n");
printf("TO COUNT NUMBER OF CHARACTERS\n");
 
 char arr[]={'V','I','V','E','K'};
 int d=0;
  for(int a=0;arr[a]!='\0';a++)
  {
    d++;
 
  }
printf("%d",d-1);
}
