#include<stdio.h>
#include<string.h>

int main() {
    printf("Programmer Name: SHUBHAM KUMAR Date:09/02/23\n");
    printf("AIM: To print reverse of each word in given sentence\n");
    char str[1000];
    printf("Enter String: ");
    fgets(str, 1000, stdin);
    int start=0,end=strlen(str)-1;
    while(start<end) {
        char temp=str[start];
        str[start]=str[end];
        str[end]=temp;
        start++;
        end--;  }
    printf("Reversed string is: %s",str);
    return 0; }
