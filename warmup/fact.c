#include "common.h"
#include <stdio.h>
int factorial(int n){
	if (n==0){
		return 1;
	}else{
		return n*factorial(n-1);
	}
}
int
main(int argc, char *argv[])
{
	if (argc >=1){
		int num = atoi(argv[1]);
		if (num>=0){
			printf("%d\n",factorial(num));
		}
	}
	return 0;
}
