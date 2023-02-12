#include <stdio.h>

int main(){
    float x,s,t,num=1.00,fac=1.00;
	int i,n,pr,y=2,m=1;

	scanf("%f %d",&x, &n);
	s=1.00; t=1.00;

	for (i=1;i<n;i++){
        for(pr=1;pr<=y;pr++){
            fac=fac*pr;
            num=num*x;
        }   
        m=m*(-1);
        num=num*m;
        t=num/fac;
        s=s+t;
        y=y+2;
        num=1.00; 
        fac=1.00;
    }
    printf("\nThe sum = %f\n",s);

    return 0;
}