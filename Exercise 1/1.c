#include <stdio.h>

void pattern1(int n){
	for(int i=0; i<n; i++){
		for(int j=0; j<=i; j++){
			printf("* ");
		}
		printf("\n");
	}
	printf("\n");
}

void pattern2(){
	for(char i='A'; i<='E'; i++){
		for(char j='A'; j<=i; j++){
			printf("%c ", j);
		}
		printf("\n");
	}
	printf("\n");
}

void pattern3(int n){
	int arr[n][n], i,j,k,p=1,f;
	//for upper triangle
	for(k=0; k<n; k++){
		j=k;
		i=0;
		while(j>=0){
			arr[i][j] = p;
			p++;
			i++;
			j--;
		}
	}
	//for lower triangle
	for(k=1; k<n; k++){
		i=k;
		j=n-1;
		f=k;
		while(j>=f){
			arr[i][j] = p;
			p++;
			i++;
			j--;
		}
	}
	//for printing
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}

void pattern4(int n){
	int space = n-1;
	for(int i=1; i<=n; i++){
		for(int j=1; j<=space; j++){
			printf("  ");
		}
		space--;
		for(int j=1; j<=(i); j++){
			printf("%d ", j);
		}
		for(int j=i-1; j>=1; j--){
			printf("%d ", j);
		}
		printf("\n");
	}
	printf("\n");
}

void pattern5(){
	int space = 0;
	for(char i='A'; i<='F'; i++){
		for(int j=0; j<=space; j++){
			printf(" ");
		}
		space++;
		char c = 'A';
		for(char j=i; j<='F'; j++,c++){
			printf("%c ", c);
		}
		printf("\n");
	}
	printf("\n");
}

void pattern6(int n){
	for ( int i = 1; i <= n; i++ ) {
		for ( int j = 1; j <= n; j++ ) {
			if (j == i || j == (n + 1 - i)) printf("$ ");
			else if(i==1||i==n || j==1 || j==n) printf("* ");
			else printf("  ");
		}
		printf("\n");
	}
	printf("\n");
}

void pattern7(int n){
	int space;
	for(int i=0; i<=6; i++){
		for(int j = 'A'; j<='G'-i; j++){
			printf("%c ", j);
		}
		for(space=1; space<=2*i-1; space++){
			printf("  ");
		}
		for(int j='G'-i; j>='A'; j--){
			if(j=='G');
			else printf("%c ", j);
		}
		printf("\n");
	}
	printf("\n");
}

void pattern8(int n){
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++){
			if((i==1 && j==1) || (i==n && j==1)) printf("  ");
			else if(i==1 || i==n || j==1 || j==n-1) printf("* ");
			else printf("  ");
		}
		printf("\n");
	}
	printf("\n");
}

void pattern9(int n){
	int space = n-1;
	for(int i=1; i<=n; i++){
		for(int j=1; j<=space; j++){
			printf("  ");
		}
		space--;
		for(int j=1; j<=i; j++){
			printf("* ");
		}
		for(int j=i-1; j>=1; j--){
			printf("* ");
		}
		printf("\n");
	}
	space = 1;
	for(int i=n-1; i>=1; i--){
		for(int j=1; j<=space; j++){
			printf("  ");
		}
		space++;
		for(int j=1; j<=i; j++){
			printf("* ");
		}
		for(int j=i-1; j>=1; j--){
			printf("* ");
		}
		printf("\n");
	}
}

int main(){
	pattern1(5);
	pattern2();
	pattern3(4);
	pattern4(5);
	pattern5();
	pattern6(5);
	pattern7(7);
	pattern8(5);
	pattern9(3);
	
	return 0;	
}