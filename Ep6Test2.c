#include <stdio.h>

main(){
	
	char std_name[50];
	int  std_age;
	
	printf("Enter name : ");
	scanf("%s" , &std_name );
	printf("Enter age : ");
	scanf("%d" , &std_age );
	printf("-----------------\n");
	printf("Hello ...... %s\n", std_name);
	printf("Wow,you ..... %d years old\n ", std_age);
	
}
