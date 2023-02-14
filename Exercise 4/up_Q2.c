#include <stdio.h>
int main() {
    printf("Programmer Name: SHUBHAM KUMAR Date:09/02/23\n");
    printf("AIM: To count the length of the string\n");
    char s[1000];
    int len = 0;
    printf ("Enter string : ");
    scanf ("%s", s);
    for (int i = 0; s[i] != '\0'; i++) {
         len++; }
    printf ("Length of given string : %d", len);
    return 0; }
// just enter a sentence
