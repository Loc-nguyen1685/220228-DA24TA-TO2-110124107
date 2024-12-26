#include"stdio.h"
long int tinhun(unsigned int n);
long int tinhgn(unsigned int n);
int main(){
	printf("%ld",tinhgn(4));
}
long int tinhun(unsigned int n){
	if (n<5)
		return n;
	else 
	return (tinhun(n-1)+tinhgn(n-2));
}
long int tinhgn(unsigned int n){
	if (n<8)
		return (n-3);
		else {
			return (tinhun(n-1)+tinhgn(n-2));
			
		}
}

