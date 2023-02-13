#include <stdio.h>
#include <string.h>

struct book{
    char name[100];
    char author[100];
    int page;
    char publisher[100];
};

void book1(){
    struct book b1;
    strcpy(b1.name, "Data Structures and Algorithm Analysis in C++");
    strcpy(b1.author, "Mark Allen Weiss");
    b1.page = 635;
    strcpy(b1.publisher, "PEARSON");

    printf("BOOK 1:\n");
    printf("NAME = %s\n", b1.name);
    printf("AUTHOR = %s\n", b1.author);
    printf("PAGE = %d\n", b1.page);
    printf("PUBLISHER = %s\n\n", b1.publisher);
}

void book2(){
    struct book b2;
    strcpy(b2.name, "Algorithms in a Nutshell");
    strcpy(b2.author, "George T. Heineman, Gary Pollice & Stanley Selkow");
    b2.page = 341;
    strcpy(b2.publisher, "O'REILLY");

    printf("BOOK 2:\n");
    printf("NAME = %s\n", b2.name);
    printf("AUTHOR = %s\n", b2.author);
    printf("PAGE = %d\n", b2.page);
    printf("PUBLISHER = %s\n\n", b2.publisher);
}

void book3(){
    struct book b3;
    strcpy(b3.name, "JavaScript The Definitive Guide");
    strcpy(b3.author, "David Flanagan");
    b3.page = 1078;
    strcpy(b3.publisher, "O'REILLY");

    printf("BOOK 3:\n");
    printf("NAME = %s\n", b3.name);
    printf("AUTHOR = %s\n", b3.author);
    printf("PAGE = %d\n", b3.page);
    printf("PUBLISHER = %s\n\n", b3.publisher);
}

int main(){
    book1();
    book2();
    book3();

    return 0;
}