#include <stdio.h>

void sort(int n, int *ptr){
    int temp;
    for(int i=0; i<n; i++){
        for(int j = i+1; j<n; j++){
            if(*(ptr+j) < *(ptr+i)){
                temp = *(ptr+i);
                *(ptr+i) = *(ptr+j);
                *(ptr +j) = temp;
            }
        }
    }
    for(int i=0; i<n; i++){
        printf("%d ", *(ptr+i));
    }
}

int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++)
        scanf("%d", &arr[i]);

    sort(n, arr);

    return 0;
}