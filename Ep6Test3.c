#include <stdio.h>


main(){
	char major[25];
	
	printf("Plese, enter your major : ");
	//scanf("%s", &major);
	gets(major);
	printf("-----------------------\n");
	//printf("Welcome to : %s\n", major);
	printf("Welcome to : ");
	puts(major);
	puts("Wow Wow Wow");
	
}
