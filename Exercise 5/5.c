#include <stdio.h>  
#include <string.h>   

void revstr (char *st)  
{  
    int len, i;  
    char *start, *end, temp;  
      
    len = strlen(st);  
    start = st;  
    end = st;  
      
    for (i = 0; i < len - 1; i++)  
    end++;  
      
    for (i = 0; i < len/2; i++)  
    {  
        temp = *end;  
        *end = *start;  
        *start = temp;  
          
        start++;  
        end--;  
    }  
}  

int main()  
{  
    char st[50];  
    printf (" Enter a string to be reversed: ");  
    scanf( "%s", st);  
      
    revstr(st);   
      
    printf (" The reverse string is: %s", st);  
    return 0;  
}  
  

  
 