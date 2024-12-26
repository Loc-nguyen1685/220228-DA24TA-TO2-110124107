#include"stdio.h"
long int tinhxn(int n);
int  main(){
	printf("%ld", tinhxn(6));
}
long int tinhxn(int n)
{
	if(n==0)
		return 1;
	else
	{
		long int s=0;
		for(int i=0; i<n; i++)
		{
			s=s+(n-i)*(long)(n-i)*tinhxn(n-i);
		}
		return s;
	}
}

