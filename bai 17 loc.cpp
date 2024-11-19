#include<stdio.h>
#include<stdbool.h>

void bai17a(int n);
void bai17b( int n);
void bai17c(int n);
void bai17d(int n);
void bai17e(int n);
void bai17f(int n);
void bai17g(int n);
void bai17h(int n, float sum=0);
void bai17i(int n);
int main(){
	bai17a();
	bai17b();
	bai17c();
	bai17d();
	bai17e();
	bai17f();
	bai17g();
	bai17h();
	bai17i();


bool isPrime(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return 0;
}
void bai17a (){
	int n;
	printf("nhap so nguyen n: ");
	scanf("%d", &n);
	if(n>=100){
		printf("nhap lai so nguyen n: ");
		
	}else{
		for(int i=1; i<=n; i++){
			printf("%d ", i);
		}
		printf("\n");
	}
}
///////////////////////////////////////////////
void bai17b (){
	int n;
	printf("nhap so nguyen n: ");
	scanf("%d", &n);
	if(n>=100){
		printf("nhap lai so nguyen n: ");
		
	}else{
		for(int i=0; i<=n; i=i+2){
			printf("%d ", i);
		}
		printf("\n");
	}
}
///////////////////////////////////////////////
void bai17c (){
	int n;
	printf("nhap so nguyen n: ");
	scanf("%d", &n);
	if(n>=100){
		printf("nhap lai so nguyen n: ");
		
	}else{
		for(int i=0; i<=n; i=i+5){
			printf("%d ", i);
		}
		printf("\n");
	}
}
////////////////////////////////////////////////
void bai17d (){
	int n;
	printf("nhap so nguyen n: ");
	scanf("%d", &n);
	if(n<2){
		printf("nhap lai so nguyen n: ");
		
	}else{
	for (int i = 2; i < n; i++) {
        if (isPrime(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");
   }
}
/////////////////////////////////////////////////
 void bai17e (){
	int n, sum=0;
	printf("nhap so nguyen n: ");
	scanf("%d", &n);
	if(n>=100){
		printf("nhap lai so nguyen n: ");
		
	}else{
		for(int i=1; i<=n; i++){
		    sum=sum+i;
		}
		printf("tong tat ca so nguyen la %d ", sum);
	}
     	printf("\n");
}
/////////////////////////////////////////////////////////////
void bai17f (){
	int n, sum=0;
	printf("nhap so nguyen n: ");
	scanf("%d", &n);
	if(n>=100){
		printf("nhap lai so nguyen n: ");
		
	}else{
		for(int i=1; i<n; i+=2){
			sum=sum+i;
		}
		printf("tong cac so nguyen le la  %d ", sum);
	}
		printf("\n");
}
///////////////////////////////////////////////////////////////
void bai17g (){
	int n,sum=0;
	printf("nhap so nguyen n: ");
	scanf("%d", &n);
	if(n<2){
		printf("nhap lai so nguyen n: ");
		
	}else{
	for (int i = 2; i < n; i++) {
        if (isPrime(i)) {
            sum=sum+i;
        }
    }
    printf("tong cac so nguyen to nho hon n: %d", sum);
   }
    printf("\n");
}
////////////////////////////////////////////////////////////////
void bai17h (){
	int n; float sum=0;
	printf("nhap so nguyen n: ");
	scanf("%d", &n);
	if(n>=100){
		printf("nhap lai so nguyen n: ");
		
	}else{
		for(int i=1; i<n; i+=2){
			sum=sum+i;
		}
		sum=sum/n;
		printf("tong cac so nguyen le la  %d ", sum);
	}
		printf("\n");
}
}

