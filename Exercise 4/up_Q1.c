#include <stdio.h>
#include <string.h>

int main() {
    char s[200];
    int count = 0, i;
    printf("Programmer Name: SHUBHAM KUMAR Date:09/02/23\n");
    printf("AIM: To count the  words in given sentence\n");
    printf("Enter the string:\n");
    scanf("%[^\n]s", s);
    for (i = 0;s[i] != '\0';i++) {
        if (s[i] == ' ' && s[i+1] != ' ')
            count++; }
    printf("Number of words in given string are: %d\n", count + 1); }
// just enter a sentence
