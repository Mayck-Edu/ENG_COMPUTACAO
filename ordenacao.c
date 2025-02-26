#include <stdio.h>

main() {
	int a, b, c;
	scanf_s("%i", &a);
	scanf_s("%i", &b);
	scanf_s("%i", &c);
	if (a > b && a > c) {
		if (b > c)
		{
			printf("Sequencia= %d %d %d \n", a, b, c);
		}
		else if (c > b)
		{
			printf("Sequencia= %d %d %d \n", a, c, b);
		}
	}
	if (b > c && b > a) {
		if (a > c)
		{
			printf("Sequencia= %d %d %d \n", b, a, c);
		  
		else
		{
			printf("Sequencia= %d %d %d \n", b, c, a);
		}
	}
	if (c > a && c > b) {

		if (a > b)
		{
			printf("Sequencia= %d %d %d \n", c, a, b);
		}
		else
		{
			printf("Sequencia= %d %d %d \n", c, b, a);

		}
	}
}
