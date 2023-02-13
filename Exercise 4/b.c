
 
 
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








