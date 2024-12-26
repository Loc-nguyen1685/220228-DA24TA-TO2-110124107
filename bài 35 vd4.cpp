#include"stdio.h"
unsigned int tinhun(unsigned int n);
int main(){
	printf("%d", tinhun(6));
}
unsigned int tinhun(unsigned int n){
	if(n<6)
	return n;
	else{
		unsigned int s=0;
		for (int i=n-1; i>=1; i--){
			s=s+tinhun(n-i);
		}
		return s;
	} 
	
}
