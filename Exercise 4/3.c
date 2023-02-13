 //NUMBER OF CHARACTER ME SPACE AUR'/0' ISKO BHI COUNT KRKE INPUT DENA.
 #include<stdio.h>
#include<string.h>
int main()
{
    printf("DATE:02/02/2023\n");
printf("NAME OF PROGRAMMER: VIVEK CHAURASIA\n");
printf("TO MODIFY CHARACTER'S\n");
char arr[]={"my name is bharat"};
for(int a=0;a<strlen(arr);a++)
{
if(arr[a]==' ')
printf(" ");
else
printf("%c",(char)(arr[a]-32));
}
return 0;
}
