#include"stdio.h"
long int tinhxn(unsigned int n);
long int tinhyn(unsigned int n);

int main(){
	printf("%ld",tinhxn(4));
}
long int tinhxn(unsigned int n ){
	if (n==0)
		return 1;
		else { return (tinhxn(n-1)+tinhyn(n-1));}
}
long int tinhyn (unsigned int n ){
	if (n==0)
	return 0;
	else {
		return (n*n*tinhxn(n-1)+tinhyn(n-1));
	}
}
