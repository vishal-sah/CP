#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int ans = 1, sum=0;
    for(int i=0; i<n; i++){
        sum += ans;
        ans = ans*10+1;
    }
    printf("%d", sum);

    return 0;
}
