#include<stdio.h>
int main(){
	int n;
	printf("nhap so nguyen duong n (n<100): ");
	scanf("%d", &n);
	if(n>=100){
	printf("nhap lai so nguyen duong n ");
    }else{
	
	for (int i=0; i<=n ; i=i+5){
		printf("%d",i);
		
	}
	printf("\n");
    }
	return 0;
}
