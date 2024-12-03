#include<stdio.h>
#include<stdlib.h>

void nhapn(int * arr, int n);
void xuatn(int * arr,int n);
int tongn(int * arr,int n);




int main() {
	int n;
	do{
		printf("nhap so luong phan tu (n<50): ");
		scanf("%d", &n);
		if (n>=50){
			printf("n khong hop le, vui long coi lai gia tri n.\n");
		}
	}while(n>=50);
	int*arr =(int*) malloc(n * sizeof(int));
	if(arr== NULL) {
		printf("khong the cap phat bo nho!\n");
		return 1;	
	}
	/////
	nhapn(arr,n);
	
	
	xuatn(arr,n);
	
	
	int tong = tongn(arr,n);
	printf("tong cac gia tri n: %d\n", tong);
	return 0;





















}
void nhapn(int * arr, int n) {
	for(int i=0; i<n; i++){
		printf("nhap phan tu n%d: ", i+1);
		scanf("%d", &arr[i]);
	}
}
void xuatn(int * arr,int n) {
	printf("danh sach cac phan tu n:\n");
	for(int i=0; i<n; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
}
int tongn(int * arr,int n){
	int tongn = 0;
	for(int i=0; i<n; i++){
		tongn += arr[i];
	}
	return tongn;
}
