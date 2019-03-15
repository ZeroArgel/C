# include <stdio.h>
# include <stdlib.h>

int main(){
	int num1 = 0 , num2 = 0;
	printf("Example 3 - Suma from two numbers int\n\n");
	printf("Write a first numbers of 1-99\t");
	scanf("%i",&num1);
	printf("Write a second numbers of 1-99\t");
	scanf("%i",&num2);
	printf("Sum of %i + %i = %i", num1, num2, num1 + num2);
	return 0;
}
