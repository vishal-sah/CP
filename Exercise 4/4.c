 //NUMBER OF CHARACTER ME SPACE AUR'/0' ISKO BHI COUNT KRKE INPUT DENA.
 #include<stdio.h>
#include<string.h>
int n;
int main()
{printf("DATE:02/02/2023\n");
printf("NAME OF PROGRAMMER: VIVEK CHAURASIA\n");
printf("TO REVERSE NUMBER OF WORDS\n");
printf("ENTER NUMBER OF CHARACTERS\n");
scanf("%d",&n);
int t=0;int z=0;
char arr[n];
char arr1[n];
for(int a=0;a<n;a++)
{
    scanf("%c",&arr[a]);
}
for(int b=0;b<n;b++)
{
  if(arr[b]==' ')
  {
    z=b-1;
    while(z>=t)
    {printf("%c",arr[z]);
    z--;}
    printf(" ");
    t=b+1;
  }
  else if(b==n-1)
  {z=n-1;
  while(z>=t)
  {  printf("%c",arr[z]);
    z--;}
  }
}
 
   


   

}