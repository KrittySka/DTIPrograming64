#include <stdio.h>

main(){
	
	int x = 10;
	
	int y = 99;
	
	x = x + 1;
	printf("%d\n" , x); //11
	
	//y = y + 1; --> 100
	//++y; --> 100
	++y; 
	printf("%d\n" , y); //100
	y--;
	printf("%d\n" , y); //99
	
}
