#include <stdio.h>
int seg(int a[],int n) {
    int k=0;int d=0;
    for(int i=0;i<n;i++) {
        if(a[i]!=0) {
        a[k++]=a[i]; }
        }
    for (int i=0;i<n;i++) {
        if(i<=k)
        printf("%d ",a[i]);
        else
        printf("0 "); }
}
int main() {
    int m, o;
    printf("Enter the length of array: ");
    scanf("%d", &o);
    int a[o];
    printf("Enter elements of the array: ");
    for (m = 0; m < o;  ++m) {
        scanf("%d",  &a[m]); }
    int n = sizeof(a) / sizeof(a[0]);
    seg(a, n);
    return 0; }
