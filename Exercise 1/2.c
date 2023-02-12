#include <stdio.h>
#include <stdbool.h>

void intro(){
    printf(" 12-02-2023\n 20223517\n VISHAL KUMAR SAH\n Print prime numbers in a range as well as their sum\n");
}

bool prime(int n){
    if(n==1 || n==0) return false;
    for(int i=2; i<n; i++){
        if(n%i==0) return false;
    }
    return true;
}

int main(){
    intro();
    int n;
    scanf("%d",&n);
    int sum = 0;
    for(int i=1; i<=n; i++){
        if(prime(i)==true){ 
            printf("%d ", i);
            sum += i;
        }
    }
    printf("\nSum = %d\n", sum);

    return 0;
}