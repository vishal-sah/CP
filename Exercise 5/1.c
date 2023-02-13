#include <stdio.h>
#include <string.h>

struct student{
    char name[100];
    int roll;
    float cpi;
};

int main(){
    struct student s1;
    strcpy(s1.name, "XYZ");
    s1.roll = 12;
    s1.cpi = 9.5;
    
    printf("Student name = %s\n", s1.name);
    printf("Student roll = %d\n", s1.roll);
    printf("Student cpi = %.2f\n", s1.cpi);

    return 0;
}