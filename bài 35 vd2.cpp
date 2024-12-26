#include"stdio.h"
unsigned int tinhfn(unsigned int n);
int main(){
	printf("%d", tinhfn(5));
}
unsigned int tinhfn(unsigned int n){
	if(n==0||n==1)
		return 1;
	else{
		return (tinhfn(n-1)+tinhfn(n-2));
	}
}
