#include<stdio.h>
int odd(int *arr1, int n) {
    int i, res_XoR = 0;
    for(i = 0; i < n; i++) {
        res_XoR = res_XoR ^ arr1[i]; }
    return res_XoR; }

int main() {
    printf("Programmer Name: SHUBHAM KUMAR Date:09/02/23\n");
    printf("AIM: No. of odd occurance of an element in array\n" );
    int k;
    printf("Enter the length of array: ");
    scanf("%d", &k);
    int j, arr1[k];
    printf("Enter %d integers: ", k);
    for(j = 0; j < k; ++j) {
        scanf("%d", &arr1[j]); }
    int count = sizeof(arr1)/sizeof(arr1[0]);
    printf("%d", odd(arr1, count));
    return 0; }

/* we have to find an element in the array which is occuring odd no. of times. */
