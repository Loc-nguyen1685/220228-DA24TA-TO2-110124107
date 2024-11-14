#include <stdio.h>
int main(){
	int n;
	printf("nhap n: (2<=n<=9)");
	scanf("%d", &n);
	if (n<2, n>9 ){
		printf("gia tri n khong hop le.\n");
		return 1;
	}
	printf("bang cuu chuong %d:\n", n);
	for(int i=1;i<=10;i++){
		printf("%d X %d=%d\n",n,i,n*i);
	
	}
	return 0;
}
