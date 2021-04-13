#include <stdio.h> 

int main() 
{ 
	int x = 2, y = 5; 
	(x & y) ? printf("True ") : printf("False "); 
	(x && y) ? printf("True ") : printf("False "); 
	return 0; 
} 
