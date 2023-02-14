#include <stdio.h>
struct book {
    char name[200];
    char author[150];
    char publisher[100];
    float price; } ;
int main() {
    int n, i;
    printf("Enter the no. of books: ");
    scanf("%d", &n);
    for (i = 0; i < n; ++i) {
        struct book b;
        printf("Enter the informatioon of Book : \n");
        printf("Book Name: ");
        scanf("%s", b.name);
        printf("Author: ");
        scanf("%s", b.author);
        printf("Publisher: ");
        scanf("%s", b.publisher);
        printf("Price: ");
        scanf("%f", &b.price); }
return 0; }
