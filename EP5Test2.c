#include <stdio.h>

main( ){
	int age;
	char fname[25] = "Jotaro";
	const int num = 111;
	
	age = 60;
	
	
	printf("Star Platinum %d\n", age);
	printf("Ora Ora Ora %s \n", fname);
	
	age = 999;
	printf("%d", age);
}
