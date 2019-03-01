#include <stdio.h>
#include <stdlib.h>

int plus(int a, int b) { return a + b; }
int minus(int a, int b) { return a - b; }
int multiply(int a, int b) { return a * b; }
int divided(int a, int b) { return a / b; }
int main()
{
	
	int a, c;
	char b;
	int (*operator[6])(int,int)={multiply,plus,NULL,minus,NULL,divided};
	printf("(Redo By P46071262)key a Function \nEX: 1 + 1\n");
	scanf("%i %c %i", &a, &b, &c);
	//REDO
	printf("%d %c %d = %d\n", a, b, c, operator[b-42](a, c));

}
