 #include<stdio.h>
 #include<math.h>
 int sum(int n)
 {
    if(n<10)
    return n;
    return n%10+sum(n/10);
 }
 int c=0;
 int main()
 {printf("DATE:02/02/2023\n");
printf("NAME OF PROGRAMMER: VIVEK CHAURASIA\n");
printf("TO CALCULATE SUM OF DIGITS\n");
printf("ENTER NUMBER");
    scanf("%d",&c);
printf("%d",sum(c));
    return 0;
 }