#include <stdio.h>

int main(){
    int n, *ptr;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++)
        scanf("%d", &arr[i]);

    int sum = 0;
    ptr = arr;
 
    for (int i = 0; i < n; i++) {
        sum = sum + *ptr;
        ptr++;
    }
    printf("SUM = %d\n", sum);

    return 0;
}