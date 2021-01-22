#include "common.h"
#include <stdio.h>
int factorial(int n){
	if (n==1){
		return 1;
	}else{
		return n*(n-1);
	}
}
int
main(int argc, char *argv[])
{
	if (argc >=1){
		int num = (int)(argv[1]);
		printf("%d",factorial(num));
	}
	return 0;
}
