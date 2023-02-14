#include <stdio.h>
#include <string.h>
int main() {
   printf("Programmer Name: SHUBHAM KUMAR Date:09/02/23\n");
   printf("AIM: To convert given string in uppercase\n");
   char s[100];
   int i;
   printf("Enter a string : ");
   fgets(s, 1000, stdin);
   for (i = 0; s[i]!='\0'; i++) {
      if(s[i] >= 'a' && s[i] <= 'z') {
         s[i] = s[i] -32; }
   }
   printf("String in Upper Case = %s", s);
   return 0; }
