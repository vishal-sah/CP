#include <stdio.h>

void intro(){
    printf(" 12-02-2023\n 20223517\n VISHAL KUMAR SAH\n Print Pascal's triangle\n");
}

int factorial(int n) {
    int f;
    
    for(f = 1; n > 1; n--)
        f *= n;
        
    return f;
}

int ncr(int n,int r) {
    return factorial(n) / ( factorial(n-r) * factorial(r) );
}

int main(){
    intro();
    int n,i,j;
    scanf("%d",&n);
    int m=1,space;
    for(i = 0; i < n; i++) {
        for(j = 0; j <= n-i; j++)
            printf("  ");
            
        for(j = 0; j <= i; j++)
            printf(" %3d", ncr(i, j));

        printf("\n");
    }

    return 0;
}